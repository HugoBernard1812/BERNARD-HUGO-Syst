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

function tablau(...args){
  
}
