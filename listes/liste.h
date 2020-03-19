#ifndef LISTE_H
#define LISTE_H

typedef struct TCell {
  int val;
  struct TCell *suc;
} TypeCellule ;

typedef struct TCell *Liste;

Liste liste_initialiser();

int liste_vide(Liste l);

Liste liste_teteinserer(Liste l, int e);

Liste liste_tetesupprimer(Liste l);

Liste liste_queueinserer(Liste l, int e);

Liste liste_queuesupprimer(Liste l);

int liste_rechercher (Liste l, int e, int *a);
#endif /*LISTE_H*/
