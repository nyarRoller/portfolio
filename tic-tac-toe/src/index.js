import React, { useState, useRef } from 'react';

import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';
import { CSSTransition } from 'react-transition-group';

function Square(props){
  let winner = calculateWinner(props.squares);
  if (!winner[0]){
    return(
      
      <button className = "square" key={props.id} onClick = {props.onClick}>
          {props.value}
      </button>
    );} 
  else{
      if (winner[1].includes(props.id)){
        return(
          <button className = "square yellow" key={props.id} onClick = {props.onClick}>
              {props.value}
          </button>)}
      else{
        return(
          <button className = "square" key={props.id} onClick = {props.onClick}>
              {props.value}
          </button>)     
      }
      }
  }

                                                        
class Board extends React.Component {
  renderSquare(i,row,col) {
    return <Square value = {this.props.squares[i]} 
                   onClick = {() => this.props.onClick(i,row,col)}
                   id = {i}
                   squares = {this.props.squares}
            />;
  }
  render() {
    
    const mas = Array(3).fill(null)
    let i = -1;
        return(
        <div>
          {mas.map((key, row) =>{
            return(
            <div className = "board-row">
                {mas.map((key, col) => {
                    i += 1;
                    return (<span className="figure" key={i}>{this.renderSquare(i,row,col)}</span>);
                })}
            </div>)
          })}
        </div>

        )

  }
}

class Game extends React.Component {
  constructor(props){
    super(props)
    this.state = {
    history : [{
      squares : Array(9).fill(null),
    }],

    x_is_next : true,
    stepNumber: 0,
    win : false,
    nobody : false,
    row : [],
    col : [],
    };
  }
  
  jumpTo(step){
    this.setState({
      stepNumber : step,
      x_is_next :(step % 2) === 0,
      win : false,
      nobody : false,
    });
  }

  handleClick(i,row,col){
    const history = this.state.history.slice(0, this.state.stepNumber + 1);
    const current = history[history.length - 1];
    const row_temp = this.state.row;
    const col_temp = this.state.col;
    const squares = current.squares.slice();
    if (current["squares"].filter(i => i === null).length == 1) {
        this.setState({nobody : true});
      }
    if (calculateWinner(squares)[0] || squares[i] || this.state.nobody) {
      return;
    }

    squares[i] = this.state.x_is_next ? 'X' : 'O';
    // rowCol.push([row,col]);

    this.setState({
      history : history.concat([{squares : squares}]),
      stepNumber: history.length,
      x_is_next : !this.state.x_is_next, 
      row : row_temp.concat([row]),
      col : col_temp.concat([col])
    })
    
  }


  render() {
    const history = this.state.history;
    const current = history[this.state.stepNumber]; 
    const row = this.state.row;
    const col = this.state.col
    const winner = calculateWinner(current.squares)[0];
    const moves = history.map((step, move) => {
    
    const desc = move ? 'Перейти к ходу №' + move + " [" + row[move - 1] + " " + col[move - 1] + "]": 'К началу игры';

      return (
        <li key={move}>
          <button onClick = {() => this.jumpTo(move)}>{desc}</button>
        </li>
      )
    })

    let status;

    if (winner) {
      status = 'Выиграл: ' + winner[0];
      
    } else if(this.state.nobody) {
      status = 'Ничья';
    } 
    else{
      status = 'Next player: ' + (this.state.x_is_next ? 'X' : 'O');
    } 

    return (
      <div className="game">
        <div className="game-board">
          <Board 
            squares = {current.squares}
            onClick = {(i,row,col) => this.handleClick(i,row,col)}
          />
        </div>
        <div className="game-info">
          <div>{status}</div>
          <ol>{moves}</ol>
        </div>  
        
      </div>
    );
  }
}

function Show(props) {
  const [showButton, setShowButton] = useState(true);
  const [showMessage, setShowMessage] = useState(false);
  const nodeRef = useRef(null);
  console.log(props.value)

  return (

      <CSSTransition
        in={showMessage}
        nodeRef={nodeRef}
        timeout={300}
        classNames="figure"
        // unmountOnExit
        onEnter={() => setShowButton(false)}
        onExited={() => setShowButton(true)}
      >
        <span className="figure">{props.value}</span>
      </CSSTransition>
  );
}

// ========================================

const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(<Game />);

function calculateWinner(squares) {
  const lines = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
    [0, 3, 6],
    [1, 4, 7],
    [2, 5, 8],
    [0, 4, 8],
    [2, 4, 6],
  ];
  for (let i = 0; i < lines.length; i++) {
    const [a, b, c] = lines[i];
    if (squares[a] && squares[a] === squares[b] && squares[a] === squares[c]) {
      return [squares[a], [a,b,c]];
    }
  }
  return [false];
}
