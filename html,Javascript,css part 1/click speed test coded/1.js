let number = 0;
let timerone = 5;
function start() {
  console.log("btn = ",btn);
  btn.setAttribute("style", "display: none")
  bt2n.setAttribute("style", "display: block")
  const timeout = setInterval(() => {
    const timer = document.getElementById("timer").innerText = timerone - 1;
    timerone = timerone - 1;
    if (timerone === 0) {
      clearInterval(timeout)
      const timer = document.getElementById("timer").innerText = timerone;
      timerone = 5;
      alert("your cps is " + number / 5)
      btn.setAttribute("style", "display: block")
      bt2n.setAttribute("style", "display: none")
      number = 0;
    }
  }, 1000);
}
function twostart() {
  const bt2n = document.getElementById("bt2n").innerText = number + 1;
  number = number + 1;
}
function hideButton() {
  console.log("hide");
  btn.setAttribute("style", "display: block");
}