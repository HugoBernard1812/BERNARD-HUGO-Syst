let x;
let y;
let n;

function range(a=1,b = 0) {
  var x;
  for (var x = a; a<=b; x++){
    return x;
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
