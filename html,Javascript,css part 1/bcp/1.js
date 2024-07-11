async function start() {
    any = 0
    timer = 0
    const one = document.getElementById("one").value;
    if (one == ".text mode") {
        window.location = "./2.html";
        any = +1
    }
    else if (one == ".timer") {
        hello = setInterval(() => {
            timer = timer + 1
            document.getElementById("one").value = timer + "s";
            any + 1;
            if (timer > 10) {
                clearInterval(hello)
                document.getElementById("one").value = ".timer";
                timer = 0
            }
        }, 1000);
    }
    else if(one == ".show time"){
        alert(new Date().toTimeString())
    }
    else if (one == ".timer mode"){
        window.location = "./3.html"
    }
    else if(one == ".shutdown"){
        window.location = "./offline.html";
    }
    else {
        if (any == 0) {
            alert('"' + one + '"' + " not found")
        }
    }
}
