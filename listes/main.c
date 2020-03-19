#include <stdio.h>

#include "liste.h"

int main()
{
  Liste l;
  Liste l2;
  int trouve, place;
  int choix;

  printf("Menu interactif\n");
  printf("0) Quitter\n");
  printf("1) Affichage test 1\n");
  printf("2) Affichage test 2\n");
  printf("3) Insertion en queue test 3\n");
  printf("4) Insertion en queue test 4\n");
  printf("5) Suppression en queue test 5\n");
  printf("6) Recherche test 6\n");
  scanf("%d", &choix);

  /*
    Note : tests  à décommenter au fur et à mesure des
    fonctions implantées
  */

  switch (choix){
  case 0:
    exit(0);
  case 1:
  /* Test 1 : affichage*/
    l = liste_initialiser();
    printf("Doit afficher :\n");
    liste_afficher(l);
    break;
  case 2:
  /* Test 2 : affichage */
    l = liste_initialiser();
    l = liste_teteinserer(l, 4);
    l = liste_teteinserer(l, 6);
    printf("Doit afficher : 6 4\n");
    liste_afficher(l);
    break;
  case 3:
  /* Test 3 : insertion en queue */
    l = liste_initialiser();
    l = liste_teteinserer(l, 4);
    l = liste_teteinserer(l, 6);
    l = liste_queueinserer(l, 8);
    printf("Doit afficher : 6 4 8\n");
    liste_afficher(l);
    l = liste_queueinserer(l, 12);
    printf("Doit afficher : 6 4 8 12\n");
    liste_afficher(l);
    break;
  case 4:
  /* Test 4 : insertion en queue */
    l2 = liste_initialiser();
    l2 = liste_queueinserer(l2, 1);
    printf("Doit afficher : 1\n");
    liste_afficher(l2);
    l2 = liste_queueinserer(l2, 2);
    printf("Doit afficher : 1 2\n");
    liste_afficher(l2);
    break;
  case 5:
  /* Test 5 : suppression en queue */
    l = liste_initialiser();
    l = liste_teteinserer(l, 4);
    l = liste_teteinserer(l, 6);
    l = liste_queueinserer(l, 8);
    l = liste_queueinserer(l, 12);
    l = liste_teteinserer(l, 14);
    l = liste_queuesupprimer(l);
    printf("Doit afficher : 14 6 4 8\n");
    liste_afficher(l);
    l2 = liste_queuesupprimer(l2);
    printf("Doit afficher : 1\n");
    liste_afficher(l2);
    l2 = liste_queuesupprimer(l2);
    printf("Doit afficher :\n");
    liste_afficher(l2);
    l2 = liste_queuesupprimer(l2);
    printf("Doit afficher :\n");
    liste_afficher(l2);
    break;
  case 6:
  /* Test 6 : recherche */
    l = liste_initialiser();
    l = liste_teteinserer(l, 4);
    l = liste_teteinserer(l, 6);
    l = liste_queueinserer(l, 8);
    l = liste_queueinserer(l, 12);
    l = liste_teteinserer(l, 14);
    l = liste_queuesupprimer(l);
    l2 = liste_initialiser();
    l2 = liste_queueinserer(l2, 1);
    l2 = liste_queueinserer(l2, 2);
    trouve = liste_rechercher(l2, 5, &place);
    printf("Doit afficher : 0\n");
    printf("%d\n", trouve);
    trouve = liste_rechercher(l, 5, &place);
    printf("Doit afficher : 0\n");
    printf("%d\n", trouve);
    trouve = liste_rechercher(l, 14, &place);
    printf("Doit afficher : 1 0\n");
    printf("%d %d\n", trouve, place);
    trouve = liste_rechercher(l, 6, &place);
    printf("Doit afficher : 1 1\n");
    printf("%d %d\n", trouve, place);
    trouve = liste_rechercher(l, 8, &place);
    printf("Doit afficher : 1 3\n");
    printf("%d %d\n", trouve, place);
    break;


  /*  l = liste_liberer(l); */
  /* l2 = liste_liberer(l2); */

  return 0;
}
