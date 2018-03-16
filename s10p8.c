#include<stdio.h>
#include<conio.h> 
void main()
{
  int n,i,a[10];
  clrscr();
  printf("\n enter the number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      scanf("%d",&a[i]);
      if(a[i]!=i)
      {
          printf("%d",i);
      }
  }
   getch();
}
