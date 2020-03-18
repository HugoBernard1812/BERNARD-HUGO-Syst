#include <stdio.h>

int affiche_chaine (char ch[])
{
  int cmpte = 0;

    while(ch[cmpte] != '\0')
      cmpte++;
    
    return cmpte;
}

int affiche_chaine2 (char ch[])
{
  int cmpte = 0;

    while(ch[cmpte])
      cmpte++;
    
    return cmpte;
}

int affiche_chaine3 (char ch[])
{
  int cmpte = -1;

    while(ch[cmpte++])
     ;
    
    return cmpte;
}

int main()
{
  affiche_chaine ("durand");
  return 0;
}
