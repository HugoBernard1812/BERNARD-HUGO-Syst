//Exercice 1 : tableaux

function range(a=1,b = 0) {
  if(a>b)
  let t = [b,a];
  else t = [a,b];
  console.log(t);
  }

range();
range(5);
range(3,7);


function sumReduce(...args){
  let t = [args] ;
  let sum = ( acc, elem ) => acc + elem ;
  let result = t.reduce(sum, 0) ;
  console.log(result) ;
  }

sumReduce(3,7,5,12,34,4);

function tableau(...args){
  let t = [args];
  let moy = (acc,elem,t.length) => (acc + elem)/t.length;
  let result = t.reduce(moy, 0) ;
  console.log(result) ;
}

tableau(4,2,6,98,2,67);

function pattern(...args){
  let t = [args];
  let s = s.toUpperCase("pattern");
  let pattern = s;
  const str1;
  t.forEach(element => str1.concat(element));
  str1.concat(" ",s);
  console.log(str1);
}

pattern("to", "upper", "case");

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

patternFilter("to", "upper", "case");

function catalog(...args){
  let t = [args];
  const str1 = "http://www.cata.log/products/";
  t.forEach(element => str1.concat(element));
  console.log(str1);
}

catalog("books", "IT", "cook");

function html(...args){
  console.log("<div class =''cata''><ul>");
  let t = [args];
  const str1 = "http://www.cata.log/products/";
  t.forEach(element => str1.concat("<li><a href=''url''>",element,"</a><li>"));
  console.log(str1);
}

html("books", "IT", "cook");

//Exercice 2 : objets
function element(n,s){
  var m = s/n
  let element = {
    nombre : n,
    somme : s,
    moyenne : m
  };
  console.log(element);
}

element(3,33);

function ficheEtudiant(num,nom,pre,mai){
  let etudiant = {
    numero : num,
    nom : nom,
    prenom : pre,
    date : new Date(),
    mail : mai,
    note : {}
  };
  console.log(etudiant);
}

ficheEtudiant(27,"Ster", "Paul", "paul.stere@gmail.com");

function calculDate(num,nom,pre,mai,y,m,d){
  let date1 = new Date();
  let date2 = new Date(y,m,d,00,00);
  let annee1 = date1.getFullYear();
  let annee2 = date2.getFullYear();
  let mois1 = date1.getMonth();
  let mois2 = date2.getMonth();
  if (mois2>mois1) let calAnnee = annee1 - annee2;
  else let calAnnee = annee1-(annee2+1);
  let etudiant = {
    numero : num,
    nom : nom,
    prenom : pre,
    mail : mai,
    note : {}
  };
  console.log(calAnnee);
  console.log(etudiant);
}

ficheEtudiant(33, "Viest", "Karl", "karl.viest@gmail.com", 1997, 7, 5);

function note(mat, not){
  let tabNote = {
    note : not,
    matiere : mat
  };
}

note("English", "16");

function moyenne(...args){
  let note = [args];
  var n = tableau.length;
    var somme=0;
    var coef = 1;
    for(i=0; i<n; i++)
    {
        somme += note[i]*coef;
    }
    var resultat = somme/n*coef;
    return resultat;
}

moyenne(13,8,14,7);

function Etudiant(num,nom,pre,mai){}

function mois(num){
  if num = getMonthEtudiant();
  return Etudiant();
}

mois(7);

function age(age){
  if age > getAgeEtudiant();
  return Etudiant();
}

age(13);

function grpeEtudiant(nomgpe,formation,liste,annee){}

function ajoutEtudiant(nomgpe,formation,liste,annee){
  let grEtudiant = new grpeEtudiant(nomgpe,formation,liste,annee);
}

ajoutEtudiant("5ae", "Tech", "5ae-Tech", "2020");

function comptEtudiant(){
  var n = Etudiant.length;
}

comptEtudiant();

function moyenneGrpeEtudiant(...args){
  let moyenne = [args];
  var n = tableau.length;
    var somme=0;
    var coef = 1;
    for(i=0; i<n; i++)
    {
        somme += moyenne[i]*coef;
    }
    var moyenneGeneral = somme/n*coef;
    return moyenneGeneral;
}

moyenneGrpeEtudiant(13,5,8,12);

function bonAnniversaire(num){
  if num = getMonthEtudiant();
  setNoteEtudiant(getNoteEtudiant()+2);
}

bonAnniversaire(6);
