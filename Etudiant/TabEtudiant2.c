#include <stdio.h>

#define MAXETUDIANTS 100
#define NBNOTES 3

typedef struct etudiant
{
  int id;
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

int main()
{
  Etudiant tab[MAXETUDIANTS];
  int nb;
  int a;
  int b;
  float moy;
  float somme_moy;
  printf("Nombre etudiants :");
  scanf("%d",&nb);
 
  for (a=0;a<nb;a++){
    printf("saisie etudiants n°%d\n", a+1);
    printf("Quel numero : ");
    scanf("%d",&tab[a].id);

    for(b = 0; b < NBNOTES; b++){
      printf("Note %d: ",b+1);
      scanf("%f",&tab[a].notes[b]);
    }
  }

for (a=0; a<nb;a++){
  moy = moyenne(tab[a]);
  somme_moy += moy;
  printf("Moyenne etudiants %d : %f\n",a+1, moy);
  }
  printf("Moyenne des moyennes :%f\n", somme_moy/nb);
  return 0;
}
