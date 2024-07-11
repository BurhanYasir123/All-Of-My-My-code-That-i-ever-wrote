function starttwo(){
    const onetwo =document.getElementById("onetwo").value;
    const twotwo =document.getElementById("twotwo").innerText = onetwo;
    haha.setAttribute("style","bottom: 50px;")
    if(onetwo ==".back"){
        window.location ="./1.html";
    }
    else if(onetwo == ""){
        haha.setAttribute("style","bottom: 150px;")
    }

}