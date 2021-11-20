function reverse(msg){
    let newMsg = "";
    if (msg.length != 0){
        for (i = msg.length - 1; i >= 0; i--){
            newMsg += msg.charAt(i);
        }
        return newMsg
    }
    else{
        return msg
    }
}
function log_msg(event){
    let msg = document.getElementsByClassName("txt")[0].value;
    if (reverse(msg) === msg){
        console.log("True")
        return true

    }
    else{
        console.log("False")
        return false

    }
}
var txt = document.getElementById("btn");
txt.addEventListener("click", log_msg);


