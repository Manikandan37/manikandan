#include <stdio.h>
#include<conio.h>
void main()
{
    int a[10],min=0,i,n;
    min=a[0];
    clrscr();
    printf("\n the numbers are");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++)
    {
    if(a[i]<min)
    min=a[i];
    }
    printf("%d",min);
  getch();
}
