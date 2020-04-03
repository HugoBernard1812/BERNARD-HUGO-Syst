function range(a=1,b = 0) {
  if(a>b)
  let t = [b,a];
  else t = [a,b];
  console.log(t);
  }


function sumReduce(...args){
  let t = [args] ;
  let sum = ( acc, elem ) => acc + elem ;
  let result = t.reduce(sum, 0) ;
  console.log(result) ;
  }

function tableau(...args){
  let t = [args];
  let moy = (acc,elem,t.length) => (acc + elem)/t.length;
  let result = t.reduce(moy, 0) ;
  console.log(result) ;
}

function pattern(...args){
  let t = [args];
  let s = s.toUpperCase("pattern");
  let pattern = s;
  const str1;
  t.forEach(element => str1.concat(element));
  str1.concat(" ",s);
  console.log(str1);
}

function patternFilter(...args){
  let t = [args];
  let s = s.toUpperCase("pattern");
  let pattern = s;
  const str1;
  t.forEach(element => str1.concat(element));
  str1.concat(" ",s);
  let result = str1.map("pattern" => "PATTERN").filter((e) => e = "0");
  console.log(str1);
}
