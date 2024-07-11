var rSlider = document.getElementById("r-slider");
var gSlider = document.getElementById("g-slider");
var bSlider = document.getElementById("b-slider");
var colorValue = document.getElementById("color-value");

rSlider.addEventListener("input", updateValues);
gSlider.addEventListener("input", updateValues);
bSlider.addEventListener("input", updateValues);

function updateValues() {
    var r = rSlider.value.toString(16).padStart(2, "0");
    var g = gSlider.value.toString(16).padStart(2, "0");
    var b = bSlider.value.toString(16).padStart(2, "0");
    document.body.style.backgroundColor = "#" + r + g + b;
    colorValue.innerHTML = "#" + r + g + b;
}
