
let timerId = setInterval(() => {
    let setDate = new Date(2022, 5, 18, 1) //year, month, day, hour, minutes, seconds
    let now = new Date();
    let different =  setDate - now;

    let days = different / 86400000;
    let hours = different % 86400000 / 3600000;
    let minutes = different % 86400000 % 3600000 / 60000;
    let seconds = different % 86400000 % 3600000 % 60000 / 1000;

    if (days >= 1 && hours < 1){
        days -= 1;
        hours += 24;
    }
    if (hours >= 1 && minutes < 1){
        hours -= 1;
        minutes += 60;
    }
    

    let timer_s = document.getElementById("timer_seconds");
    let timer_m = document.getElementById("timer_minutes");
    let timer_h = document.getElementById("timer_hours");
    let timer_d = document.getElementById("timer_days");

    timer_d.innerText = Math.floor(days);
    timer_s.innerText = Math.floor(seconds);
    timer_h.innerText = Math.floor(hours);
    timer_m.innerText = Math.floor(minutes);


}, 1000);


