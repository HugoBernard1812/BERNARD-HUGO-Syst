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
  if ((e.id)==01)
    {
      e.note1 = 14;
      e.note2 = 16;
      e.note3 = 11;
      printf("%f\n",moyenne(e));
    }
  if ((e.id)==02)
    {
      e.note1 = 8;
      e.note2 = 19;
      e.note3 = 12;
      printf("%f\n",moyenne(e));
    }
  if ((e.id)==03)
    {
      e.note1 = 6;
      e.note2 = 9;
      e.note3 = 10;
      printf("%f\n",moyenne(e));
    }
  return 0;
}
