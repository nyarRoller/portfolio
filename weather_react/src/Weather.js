import './weather.css';
import React from 'react';
import { RingLoader } from 'react-spinners';

 



function WeatherCard(props){
    let class_name = "weather-card";
    let temp_name = "weather-card-element temp"
    let main_name = "weather-card-element main"

    if (props.isLast){
      class_name = "weather-card last tn";
      temp_name = "weather-card-element temp no_animate"
      main_name = "weather-card-element main no_animate"
    }
    if (props.isFirst){
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
    pos : [],
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
    ],
    coords : null,
    error : false,
    setDef : true

  }
    // this.getGeo = navigator.geolocation.getCurrentPosition(this.getDataCord)

} 

//
getDataCord(){
  const cords = this.state.coords;
  fetch(`https://api.openweathermap.org/data/2.5/forecast?lat=${cords.coords.latitude}&lon=${cords.coords.longitude}&units=metric&appid=948f7328f7cfd2ea91673c115454976d`) 
  .then(response => response.json())
  .then(data => {
    const tm = [0, 20, 39]
    let info = this.state.list;
    tm.forEach(function(item, i, tm){
      info[i].temp = Math.round(data.list[item].main.temp);
      info[i].max_temp = Math.round(data.list[item].main.temp_max);
      info[i].min_temp = Math.round(data.list[item].main.temp_min);
      info[i].wind_speed = data.list[item].wind.speed;
      info[i].weather = data.list[item].weather[0].main;
      info[i].cloud = data.list[item].clouds.all;
      info[i].city = data.city.name;
      info[i].date = data.list[item].dt_txt;
    })
    console.log(data.city.name)
    this.setState({
      list : info,
      city : info[0].city
  })

    // console.log(data.main.temp)
}).catch(error => console.log(error));
}


//the function getting data from openwatherapi,parsing and wrting them to the state
getDataCity(city){
  //converting city to geocords
  fetch(`https://api.openweathermap.org/geo/1.0/direct?q=${city}&limit=5&appid=948f7328f7cfd2ea91673c115454976d`)
  .then(latlon => latlon.json())
  .then(latlon => latlon = [latlon[0].lat, latlon[0].lon]) 
  .then(
    //return foreacast array with 40 values
    result => fetch(`https://api.openweathermap.org/data/2.5/forecast?lat=${result[0]}&lon=${result[1]}&units=metric&appid=948f7328f7cfd2ea91673c115454976d`) 
  )
  .then(response => response.json())
  .then(data => {
    const tm = [0, 20, 39] //which values in array we need
    let info = this.state.list;

    //writing array to the state
    tm.forEach(function(item, i, tm){
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

}

//futction on the button
handleSubmit = (event) => {
  event.preventDefault();
  this.getDataCity(this.inputNode.value);
  this.inputNode.value = "";
}
getGeo() {

   }

  

render (){

  //default value 
  const default_ = "London";
  if (this.setState.setDef){

  }


  //checking is first values got
  if (!this.state.first_get){
    if (this.state.error != false){
      this.setState({first_get : true})
      this.getDataCity(default_);
      this.setState({setDef : false});
      console.log("[ERROR]")

    }
    //getting currrent geolocation and writing to state
    if (window.navigator.geolocation) {
        window.navigator.geolocation
        .getCurrentPosition(coords => {this.setState({coords : coords})}, error => {this.setState({error : error})});


      console.log(this.state.error)
      
      if (this.state.coords != null){
        this.setState({first_get : true});
        console.log(this.state.coords)
        this.getDataCord();
    } 
    } else{
      this.setState({first_get : true})
    }
  }


  //current values
  const city = this.state.city;
  const info = this.state.list;
  let size = 0;
  let main_box = "main_box";
  if (!this.state.first_get && this.state.list[0].temp === null){
    main_box += " invisiable";
    size = 200;
  }
  console.log(main_box)
  //return weather object
  return <div className="weater">
            <RingLoader color="#36d7b7" 
            size = {size}
            // cssOverride = {""}

            />

            <div className={main_box}>
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
                  isFirst = {true}
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
                  isLast = {true}
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
    </div>
      
    }
  }


export default Weather;
