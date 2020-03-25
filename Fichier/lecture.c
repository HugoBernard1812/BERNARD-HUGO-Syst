#include <stdio.h>
#include <stdlib.h>

int main(void)
{
FILE *f;
char Ville[40];
int Code_postal;

f = fopen("codes.txt", "r+");

if(f==NULL){
printf("Erreur lors de l'ouverture d'un fichier");
exit(1);
}

while(fgets(Ville,Code_postal,f) != NULL)
{
fscanf(f,"%s %d", &Ville, &Code_postal);

printf("Ville : %s et Code_postal : %d\n", Ville, Code_postal);
}
free(f);
fclose(f);


return 0;
}
