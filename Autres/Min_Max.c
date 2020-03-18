# include <stdio.h>

int min ( int a , int b)
{
return (a < b)? a : b;
}

int max ( int a , int b)
{
return (a > b)? a : b;
}

int main ()
{
  int x;
  int y;
  
  printf("int x :");
  scanf("%d",&x);
  printf("int y :");
  scanf("%d", &y);


printf ( "Le minimum est %d\n", min (x , y ) );
printf ( "Le maximum est %d\n", max (x , y ) );

return 0;
}
