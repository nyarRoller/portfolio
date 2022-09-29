import logo from './logo.svg';
import './weather.css';
import React from 'react';
import { render } from '@testing-library/react';



function WeatherCard(props){
    let class_name = "weather-card";
    let temp_name = "weather-card-element temp"
    let main_name = "weather-card-element main"

    if (props.isLastFirst){
      class_name = "weather-card last tn";
      temp_name = "weather-card-element temp no_animate"
      main_name = "weather-card-element main no_animate"

    }
      
    return (
      <div className={class_name}>
          <div className="date tn">{props.date}</div>
          <div className={temp_name}>{props.temp} °C</div>
          <div className={main_name}>{props.weather}</div>
          <div className='weather-card-element max_temp tn'>Maximum: {props.max_temp} °C</div>
          <div className='weather-card-element min_temp tn'>Minimum: {props.min_temp} °C</div>
          <div className='weather-card-element cloudiness tn'>Clouds: {props.cloud}%</div>
          <div className="weather-card-element wind_speed tn">Wind speed: {props.wind_speed} Km/H</div>
      </div>
    )
  
}
class Weather extends React.Component {
constructor(props){
  super(props);
  this.state ={
    city : "London",
    first_get : false,
    list : [
      {
        date : null,
        temp : null,
        max_temp : null,
        min_temp : null,
        weather : null,
        cloud : null,
        wind_speed : null,
      },
      {
        date : null,
        temp : null,
        max_temp : null,
        min_temp : null,
        weather : null,
        cloud : null,
        wind_speed : null,
      },
      {
        date : null,
        temp : null,
        max_temp : null,
        min_temp : null,
        weather : null,
        cloud : null,
        wind_speed : null,
      }
    ]

  }
} 
getData(city){
  fetch(`https://api.openweathermap.org/geo/1.0/direct?q=${city}&limit=5&appid=6e020ebb2670c10f7dc785b2235b58da`)
  .then(latlon => latlon.json())
  .then(latlon => latlon = [latlon[0].lat, latlon[0].lon]) 
  .then(
    result => fetch(`https://api.openweathermap.org/data/2.5/forecast?lat=${result[0]}&lon=${result[1]}&units=metric&appid=6e020ebb2670c10f7dc785b2235b58da`) 
  )
  .then(response => response.json())
  .then(data => {
    console.log(data);
    const tm = [0, 20, 39]
    let info = this.state.list;
    tm.forEach(function(item, i, tm){
      console.log(item,i, tm)
      info[i].temp = Math.round(data.list[item].main.temp);
      info[i].max_temp = Math.round(data.list[item].main.temp_max);
      info[i].min_temp = Math.round(data.list[item].main.temp_min);
      info[i].wind_speed = data.list[item].wind.speed;
      info[i].weather = data.list[item].weather[0].main;
      info[i].cloud = data.list[item].clouds.all;
      info[i].city = data.list[item].name;
      info[i].date = data.list[item].dt_txt;
    })
    this.setState({
      list : info,
      city : city
  })
    // console.log(data.main.temp)
});
  console.log(this.state.temp);
  // console.log(weather);
  // console.log(this.state.apiData)
}
handleSubmit = (event) => {
  event.preventDefault();
  this.getData(this.inputNode.value);
  this.inputNode.value = "";
}
render (){
  if (!this.state.first_get){
    this.getData(this.state.city);
    this.state.first_get = true;
  }
  // const temp = Math.round(this.state.list.temp);
  // const cloud = this.state.cloud;
  // const wind_speed = this.state.wind_speed;
  // const max_temp = Math.round(this.state.max_temp);
  // const weather = this.state.weather;
  // const min_temp = Math.round(this.state.min_temp);
  const city = this.state.city;
  const info = this.state.list;
  return <div className="weater">
            <div className="city">{city}</div>
            <div className='weather_cards'>
              <WeatherCard
                temp = {info[0].temp}
                cloud = {info[0].cloud}
                wind_speed = {info[0].wind_speed}
                max_temp = {info[0].max_temp}
                weather = {info[0].weather}
                min_temp = {info[0].min_temp}
                date = {info[0].date}
                isLastFirst = {true}
            />
              <WeatherCard
                temp = {info[1].temp}
                cloud = {info[1].cloud}
                wind_speed = {info[1].wind_speed}
                max_temp = {info[1].max_temp}
                weather = {info[1].weather}
                min_temp = {info[1].min_temp}
                date = {info[1].date}
                isLastFirst = {false}
            />
              <WeatherCard
                temp = {info[2].temp}
                cloud = {info[2].cloud}
                wind_speed = {info[2].wind_speed}
                max_temp = {info[2].max_temp}
                weather = {info[2].weather}
                min_temp = {info[2].min_temp}
                date = {info[2].date}
                isLastFirst = {true}
            />
            </div>
            <form onSubmit={this.handleSubmit}>
              <div className="user-box">
                <input type="text" ref={node => (this.inputNode = node)}/>
                <label>City</label>
              </div>
              <button href="#" onClick={this.handleSubmit} type="submit">

                Submit
              </button>
    </form>
    </div>

}
}

export default Weather;
