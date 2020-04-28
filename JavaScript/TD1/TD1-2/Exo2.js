let x;
let y;
let n;
let init;
let step;
var format;

/*function creerMultiplicateur(x = 1, n = 1){
  x = x*n;
  return (c) => {return x*n;};
}

let cm = (x,n) => x*n;

function creerSequence(init = 0, step = 0){
      init = init + step;
  return (a) =>{return init + step;};
}*/

function creerMultiplicateur(n)
{
    return (x) => x * n;
}

 creerMultiplicateur(24);

function creerSequence(init, step)
{
    init -= step;

    return () => init += step;
}

creerSequence(4,5);

function fibonnaci(x = 0, y = 1){
  n = y;
  y = x + y;
  x = n;
  return (f) =>{return x+y;};
}

fibonnaci(5,5);

function creerMultiplicateur(n = 1){
  n = n*n;
  return (cm) =>{return n*n;};
}

creerMultiplicateur(5);

function power(x= 1, n= 1){
  var a = x;
  for (var number = 1; number<n; number++){
  a = a*x;
  }
  return (p) => {return a*x;};
}

power(3,3);

function power(x = 1){
  return (po) => {return x*x;};
}

power(4);

 //écrire une fonction formatter() qui construit une fonction de formatage de messages en ajoutant un n° de message incrémenté à chaque appel. On l'utilisera ainsi : var format = formatter(10) ;   // on numérote les messages à partir de 10 format( 'le ciel est blanc') ; //  retourne "10 : le ciel est blanc" → retourne "10 : le ciel est blanc" format('la neige est bleue') ; //  retourne "11: la neige est bleue"
function formatter(format=1){

const str1 = 'le ciel est blanc';
const str2 = 'la neige est bleue';

console.log(format.toString().concat(' : ', str1));

format = format + 1;

console.log(format.toString().concat(' : ', str2));
}

formatter(15);

function write(str = "a"){
  console.log(str);
  return str;
}

write("Hello World");

function writeAlert(str = "a"){
  alert(str);
}

writeAlert("Hello World");

function logger(str1 = "a", str2 = "b"){
console.log(str1.toString().concat(' : ', str2));
}

logger("Hello", "World");
