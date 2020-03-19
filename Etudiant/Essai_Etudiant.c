
/* Inclusion d'une librairie standard */

#include <stdio.h>

/* Déclaration de constantes */

#define TAILLE_NOM 20
#define TAILLE_TABLEAU_MAX 30 

/* Déclaration d'une structure de type Etudiant */

typedef struct Etud {
  char nom[TAILLE_NOM];
  float note;
} Etudiant;

/* Fonction de lecture de données */	

void saisir_donnees(Etudiant t[], int taille)
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

void afficher_donnees(Etudiant t[], int taille)
{
  int i;	 

  /* Affichage de chaînes de caractères et de réels */
  for (i = 0; i < taille; i++)
    printf("Nom : %s, note : %f\n", t[i].nom, t[i].note);
}

/* Calcul de la moyenne des étudiants (à remplir) */

float moyenne(Etudiant e)
{
  float somme;
  int i; 
  for(i = 0; i < 2; i++){
    somme += e.note;
  }
  return somme; 
}

float moyenne_tab_etudiants(Etudiant tab[], int taille)
{
  int i;
  float somme;
  for (i = 0; i< taille; i++)
    {
      somme += moyenne(tab[i]);
    }
  return somme/taille; 
}    


/* Affichage de l'éudiant présentant la note minimale (à remplir) */
void note_min(Etudiant tab[], int taille)
{
  int i;
  float min = tab[0].note;
  float note;
  for (i = 1; i<taille; i++)
    {
      note = tab[0].note;
      if (note > min)
	{
	  min = note;
	}
    }
}

/* Mise à jour de toutes les notes par un coefficient donné (à remplir) */
void mise_a_jour(Etudiant tab[], int taille, float coef)
{
  int i;
  float note;
  for (i = 0; i<taille; i++)
    {
      note = tab[i].note;
      note = note * coef;
      tab[i].note = note;
    }
}

/* Gestion du menu interactif */

void menu(Etudiant tab[], int taille)
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
  case 1:
    printf("Moyenne des étudiants : %f", moyenne_tab_etudiants(tab, taille));
    break;
  case 2:
    note_min(tab, taille);
    break;
  case 3:
    printf("Mise a jour des notes , veuillez entrer un coefficient :\n");
    scanf("%f", &coef);
    mise_a_jour(tab, taille, coef);
    break;
  default:
    printf("Votre choix n'est pas dans la liste !");
    break;
  }
}

/* PROGRAMME PRINCIPAL */

int main ()
{
  Etudiant t[TAILLE_TABLEAU_MAX];
  int taille;
  
  printf("Nombre d'étudiants : \n");
  scanf("%d", &taille); 
  saisir_donnees(t, taille);
  afficher_donnees(t, taille);
  menu(t,taille);
  
  return 0;
}

