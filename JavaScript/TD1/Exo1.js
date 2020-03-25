let x;
let y;
let n;

function max(x, y) {
  if (x>y){
  let resultat = `max : x = ${x}`;
  return resultat;
  }else {
  let resultat = `max : y = ${y}`;
  return resultat;
  }
}

function min(x,y){
  if (x<y){
  let resultat = `min : x = ${x}`;
  return resultat;
  }else {
  let resultat = `min : y = ${y}`;
  return resultat;
  }
}

function affiche() {
  var number = 0;
  while (number < 100) {
    number++;
    console.log(number);
    if (number%3 === 0){
      console.log("woueee");
    }
    if (number%5 === 0){
      console.log("yooo");
    }
    if (number === 73){
      console.log("Biinnngooo");
    }
  }
}

function power(x= 1, n=1){
  var a = x;
  for (var number = 1; number<n; number++){
  a = a*x;
  }
  return a;
}

function recursif(x = 1, n = 1) {
 var a = x;
 var number = 1;
 while (number<n) {
   number++;
   x = x*a;
 }
 return x;
}
