btn = document.getElementById("btn");
btn.addEventListener("click", fizzbuzz);

function fizzbuzz(event){
    date = document.getElementById("txt").value;
    for (i = 1; i <= date; i++){
        if (i % 3 == 0 && i % 5 == 0){
            console.log("FizzBuzz")
        }
        else if (i % 5 == 0){
            console.log("Buzz")
        }
        else if (i % 3 == 0){
            console.log("Fizz")
        }
        else{
            console.log(i)
        }
    }
}