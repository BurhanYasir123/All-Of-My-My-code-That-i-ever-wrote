let shape = [
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
];


const grid = document.getElementById("grid");
function element(px,id){
    let element = document.createElement("div");
    element.setAttribute("toggle", "off");
    element.style.width = `${px}px`
    element.style.height = `${px}px`
    element.style.backgroundColor = "black";
    // element.style.border = '1px solid white';
    element.setAttribute("id",id)
    // element.onmouseover = function() {
    //     const toggle = element.getAttribute("toggle");
    //     if (toggle == "off") {
    //         element.setAttribute("toggle", "on");
    //         element.style.backgroundColor = "white";
    //         element.style.border = '1px solid black';
    //     }
    //     else {
    //         element.setAttribute("toggle", "off");
    //         element.style.backgroundColor = "black";
    //         element.style.border = '1px solid white';
    //     }        
    // }
    grid.append(element);
}
for(let i = 0;i!=100;i++){
    element(30,i);
}

let direc = 1
function getlocation(num){
    if(num == 9){
        direc = -1
    }
    if(num == 0){
        direc = 1
    }
    num = num + direc
    return num;
}

show()
let prevX = 0
let prevY = 0
let x = 1 - 1
let y = 0 - 1
setInterval(() => {
    console.log(`${x}  ${y}   ${getlocation(y)}    ${getlocation(x)}`)
    shape[getlocation(y)][getlocation(x)] = 1
    y = getlocation(y)
    x = getlocation(x)
    shape[prevY][prevX] = 0
    prevX = x
    prevY = y
    show()
}, 100)


function show(){
    for(let i = 0;i < 10;i++){
        for(let j = 0;j < 10;j++) {
            const id = parseInt(`${i}${j}`);
            // console.log("id = ",id);
            if(shape[i][j] == 1){
                document.getElementById(id).style.backgroundColor = "black"
            }
            if(shape[i][j] == 0){
                document.getElementById(id).style.backgroundColor = "white"
            }
        }
    }
}