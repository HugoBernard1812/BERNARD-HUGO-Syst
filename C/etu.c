#include "etu.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Fonction de lecture de données */	

void etu_saisir_info(Etudiant t[], int taille)
{
  int i;
  
  for (i = 0; i < taille; i++) {

    printf("Nom du %d ème étudiant :\n", i + 1); 	

    /* Saisir une chaîne de caractères */
    scanf("%s", t[i].nom);
    
    printf("Note du %d ème étudiant :\n", i + 1);
    
    /* Saisir un réel */
    scanf("%f", &t[i].note);
    
    while ((t[i].note < 0) || (t[i].note > 20)) {
      printf("Erreur ! Indiquez une valeur entre 1 et 20\n");
      scanf("%f", &t[i].note);
    }		
  }
}

/* Fonction d'affichage de données lues */

void etu_afficher_info(Etudiant t[], int taille)
{
  int i;	 

  /* Affichage de chaînes de caractères et de réels */
  for (i = 0; i < taille; i++)
    printf("Nom : %s, note : %f\n", t[i].nom, t[i].note);
}

/* Calcul de la moyenne des étudiants (à remplir) */

float etu_moy_tab_etudiants(Etudiant tab[], int taille)
{
  int i;
  float somme;
  for (i = 0; i< taille; i++)
    {
      somme += tab[i].note;
    }
  return somme/taille; 
}    


/* Affichage de l'éudiant présentant la note minimale (à remplir) */
void etu_min(Etudiant tab[], int taille)
{
  float min;
  int i;
  char nom_min[CHAR_MAX];
  
  if (taille)
    {
      min = tab[0].note;
      strcpy(nom_min, tab[0].nom);
    
 
      for (i = 1; i<taille; i++)
	{
	  if(tab[0].note < min)
	    {	
	      min = tab[i].note;
	      strcpy(nom_min, tab[i].nom);
	    }
        }
    }
  printf("Minimum : %s a eu %f\n", nom_min, min);  
}

/* Mise à jour de toutes les notes par un coefficient donné (à remplir) */
void etu_mise_jour(Etudiant tab[], int taille, float coef)
{
  int i;
 
  for (i = 0; i<taille; i++)
    {
      tab[i].note += coef;
    }
}

/* Gestion du menu interactif */

void etu_menu(Etudiant tab[], int taille)
{
  int choix;
  float coef;
  
  printf("Menu interactif\n");
  printf("0) Quitter\n");
  printf("1) Calculer la moyenne des etudiants\n");
  printf("2) Afficher la note minimale\n");
  printf("3) Faire une mise a jour des notes avec un certain coefficient\n");
  scanf("%d", &choix);
  
  switch (choix){
  case 0:
    exit(0);
  case 1:
    printf("Moyenne des étudiants : %f\n", etu_moy_tab_etudiants(tab, taille));
    break;
  case 2:
    etu_min(tab, taille);
    break;
  case 3:
    printf("Mise a jour des notes , veuillez entrer un coefficient :\n");
    scanf("%f", &coef);
    etu_mise_jour(tab, taille, coef);
    break;
  default:
    printf("Votre choix n'est pas dans la liste !");
    break;
  }
}
