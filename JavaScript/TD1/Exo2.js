let x;
let y;
let n;
let init;
let step;

function creerMultiplicateur(x = 1, n = 1){
  x = x*n;
  return (c) => {return x*n;};
}

let cm = (x,n) => x*n;

function creerSequence(init = 0, step = 0){
      init = init + step;
  return (a) =>{return init + step;};
}

function fibonnaci(x = 0, y = 1){
  n = y;
  y = x + y;
  x = n;
  return (f) =>{return x+y;};
}

function creerMultiplicateur(n = 1){
  n = n*n;
  return (cm) =>{return n*n;};
}

function power(x= 1, n=1){
  var a = x;
  for (var number = 1; number<n; number++){
  a = a*x;
  }
  return (p) => {return a*x;};
}

function power(x = 1){
  return (po) => {return x*x;};
}
