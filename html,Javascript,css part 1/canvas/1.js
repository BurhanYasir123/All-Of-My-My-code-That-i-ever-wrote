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


// for(let i = 0;i!=10;i++){
//     shape[i][i] = 1
// }
// for(let i = 0;i!=10;i++){
//     shape[i][9-i] = 1
// }
// for(let i = 0;i!=9;i++){
//     shape[9][i] = 1
// }
// for(let i = 0;i!=9;i++){
//     shape[0][i] = 1
// }
// for(let i = 0;i!=9;i++){
//     shape[i][9] = 1
// }
// for(let i = 0;i!=9;i++){
//     shape[i][0] = 1
// }
// for(let i = 4;i!=6;i++){
//     for(let j = 0;j!=9;j++){
//         shape[j][i] = 1
//     }
// }
// for(let i = 4;i!=6;i++){
//     for(let j = 0;j!=9;j++){
//         shape[i][j] = 1
//     }
// }
// for(let i = 4;i!=6;i++){
//     for(let j = 4;j!=6;j++){
//         shape[i][j] = 0
//     }
// }





// let i2 = 0
// for(let j = 0;j!=8;j=j+2){
//     i2 = 0
//     for(let i = j+1;i!=9;i++){
//         shape[i][i2] = 1
//         shape[i2][i] = 1
//         i2 = i2 + 1
//     }  
// }





// for(let i = 0;i!=10;i++){
//     shape[i][i] = 1
//     shape[i][9-i] = 1
//     shape[0][i] = 1
//     shape[9][i] = 1
//     shape[i][0] = 1
//     shape[i][9] = 1
//     for(let j = 3;j!=7;j++){
//         shape[j][2] = 1
//         shape[2][j] = 1
//         shape[j][7] = 1
//         shape[7][j] = 1
//     }
//     for(let j = 4;j!=6;j++){
//         for(let k = 4;k!=6;k++){
//             shape[j][k] = 0
//         }
//     }
// }


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
