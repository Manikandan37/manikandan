#include <stdio.h>
#include<conio.h> 
void main()
{
  int a,b,c;
  printf("Enter the a,b,c values");
  scanf("%d%d%d",&a,&b,&c);
  printf("%d",(a*b)%c);
  getch();
}
