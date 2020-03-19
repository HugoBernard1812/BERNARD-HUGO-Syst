#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "etu.h"

/* PROGRAMME PRINCIPAL */

int main ()
{
  Etudiant t[TABLEAU_MAX];
  int taille;
  
  printf("Nombre d'étudiants : \n");
  scanf("%d", &taille); 
  etu_saisir_info(t, taille);
  etu_afficher_info(t, taille);
  etu_menu(t,taille);
  
  return 0;
}
