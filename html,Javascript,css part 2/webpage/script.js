console.log("working")
function write(event){
  alert("Hello")
  event.preventDefault();
  console.log("Running Write");
  let text = document.getElementById("button").innerText;
  console.log("text = ",text)
  if (text === "Burhan") {document.getElementById("button").innerText = "Press Button"}
  else {document.getElementById("button").innerText = "burhan"}
 }