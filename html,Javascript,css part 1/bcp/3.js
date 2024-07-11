function start(){
    const one =document.getElementById("one").value;
    if(one == ".back"){
        window.location = "./1.html";
    }
    lol=0;
    let hello = setInterval(() => {
        lol=lol+1;
        const one2 =document.getElementById("one2").innerText = lol + "s/"+one+"s";
        if(lol == one){
            clearInterval(hello);
            haha.setAttribute("style","display: block;")
        }
    }, 1000);
}
function reset(){
    window.location = "./3.html"
}