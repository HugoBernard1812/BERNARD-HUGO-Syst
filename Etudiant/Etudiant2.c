#include <stdio.h>

typedef struct etudiant
{
  float note1;
  float note2;
  float note3;
  int id;
}Etudiant;

float moyenne(Etudiant e)
{
  float moy;
  moy = (e.note1+e.note2+e.note3)/3;
  return moy;
}

int main()
{
  Etudiant e;
  scanf("%d",&(e.id));
  scanf("%f",&(e.note1));
  scanf("%f",&(e.note2));
  scanf("%f",&(e.note3));
  printf("%f\n",moyenne(e));
  return 0;
}
