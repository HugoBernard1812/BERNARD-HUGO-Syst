#ifndef _etu
#define _etu

#define CHAR_MAX 20
#define TABLEAU_MAX 30 

typedef struct Etu {
  char nom[CHAR_MAX];
  float note;
} Etudiant;

void etu_saisir_info(Etudiant t[], int taille);

void etu_afficher_info(Etudiant t[], int taille);

float etu_moy_tab_etudiants(Etudiant tab[], int taille);

void etu_min(Etudiant tab[], int taille);

void etu_mise_jour(Etudiant tab[], int taille, float coef);

void etu_menu(Etudiant tab[], int taille);

#endif

