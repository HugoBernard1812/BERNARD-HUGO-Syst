# include < stdio .h >

void affiche_tableau ( int tab [] , int taille )
{
int i;

for (i = 0; i < taille ; i ++)
printf ( ” Élément no % d : % d \ n ” , i + 1, tab [i ]) ;

}

int main ()
{
int tab1 [20];
int tab2 [30];

/* Initialisation des tableaux ... */
/* Affichage de chaque tableau */

affiche_tableau ( tab1 , 20) ;
affiche_tableau ( tab2 , 30) ;

return 0;
}
