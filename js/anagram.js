btn = document.getElementById("btn");
btn.addEventListener("click", anagram);

function anagram(event){
    date = document.getElementById("txt").value.split(" ");
    word1 = date[0].split("");
    word2 = date[1].split("");
    let i = 0;
    if (word1.length < word2.length){
        while (i <= word1.length + 1){
            if (word2.indexOf(word1[i]) != -1){
                word2.splice(word2.indexOf(word1[i]))
                word1.splice(i);
                i = 0
            }
            i++;
        }
    }
    else{
        while (i <= word2.length + 1){
            if (word1.indexOf(word2[i]) != -1){
                word1.splice(word1.indexOf(word2[i]))
                word2.splice(i);
                i = 0
                console.log(word1,i,word2)
            }
            i++;
        }
    }

    if (word1.length == 0){
        console.log("True")
    }
    else{
        console.log("False")    }
}
