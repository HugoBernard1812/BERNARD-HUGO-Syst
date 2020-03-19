#include <stdio.h>
#include <stdlib.h>

#include "liste.h"

/* Initialisation d'une liste */
Liste liste_initialiser()
{
  return(NULL);
}

/* Test si une liste est vide */
int liste_vide(Liste l)
{
  return (l == NULL);
}

/* Ajout d'un élément en tête de liste */
Liste liste_teteinserer(Liste l, int e)
{
  Liste p;

  p = (Liste) malloc(sizeof(TypeCellule));
  if (p == NULL) {
    printf("Allocation impossible...\n");
    exit(1);
  }
  p->val = e;
  p->suc = l;

  return (p);
}

/* Suppression d'un élément en tête de liste */
Liste liste_tetesupprimer(Liste l)
{
  Liste p = NULL;

  if (!liste_vide(l)) {
    p = l->suc;
    free(l);
  }

  return (p) ;
}

void liste_afficher(Liste l)
{
  while (l){
    printf("%d",l->val);
    l = l->suc;
  }
  printf("\n");
}

Liste liste_queueinserer(Liste l, int e)
{
  Liste p;

  p = (Liste) malloc(sizeof(TypeCellule));
  while (p != NULL) {
    printf("Allocation impossible...\n");
     exit(1);
  }
  p->val = e;
  p->suc = l;

  return (p);
}

Liste liste_queuesupprimer(Liste l)
{
  Liste p = NULL;

  while(liste_vide(l)) {
    p = l->suc;
  }
  free(l);
  return (p) ;
}

int liste_rechercher (Liste l, int e, int *a)
{
  *a = 0;
  while ((l != NULL)&&(l->val != e)) {
    l = l->suc;
    *a++;
  }
  return 1;
}
