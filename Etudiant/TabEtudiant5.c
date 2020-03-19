#include <stdio.h>

#define MAXETUDIANTS 100
#define NBNOTES 3
#define MAXNOM 50

typedef struct etudiant
{
  char nom[MAXNOM];
  float notes[NBNOTES];
}Etudiant;


float moyenne(Etudiant e)
{
  float somme;
  int i; 
  for(i = 0; i < NBNOTES; i++){
    somme += e.notes[i];
  }
  return somme/NBNOTES; 
}

  void affiche_resultat(Etudiant e)
  {
     printf("Moyenne etudiant %s : %.2f\n",e.nom, moyenne(e));
  }

void affiche_moyennes(Etudiant tab[], int nb)
{
  int a = 0;
  for (a=0; a<nb; a++)
    {
      affiche_resultat(tab[a]);
    }
}

float moyenne_generale(Etudiant tab[], int nb)
{
  int a = 0;
  float somg =0.;
  for (a=0; a<nb; a++)
    {
      somg += moyenne(tab[a]);
    }
  return somg/nb;
}
  
int main()
{
  Etudiant tab[MAXETUDIANTS];
  int nb;
  int a;
  int b;
  char nom;
  printf("Nombre etudiants :");
  scanf("%d",&nb);
 
  for (a=0;a<nb;a++){
    printf("saisie etudiants n°%d\n", a+1);
    printf("Quel nom : ");
    scanf("%s",tab[a].nom);
  
    for(b = 0; b < NBNOTES; b++){
      printf("Note %d: ",b+1);
      scanf("%f",&tab[a].notes[b]);
    }
  }

 
  affiche_moyennes(tab, nb);
  printf("Moyenne etudiants: %f\n",moyenne_generale(tab,nb));
  return 0;
}
