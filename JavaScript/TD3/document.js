
function logClick(event){
    console.log("click : ");
}

function updateButtonClass(event){
    event.target.classList.toggle("c1");
    event.target.classList.toggle("c2");
}

window.addEventListener("load", () => {
    let n = 0;
    let ex1 = document.getElementById("button");
    ex1.addEventListener("click", logClick);
    ex1.addEventListener("click", updateButtonClass);
    ex1.addEventListener("click", (event) => {
      let ul = document.querySelector("button");
      let li = document.createElement("li");
      let t = document.createTextNode(`click bouton : ${n++}`);
      li.appendChild(t);
      ul.appendChild(li);
    });
});
