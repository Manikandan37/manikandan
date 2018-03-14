#include <stdio.h>
#include<conio.h>
void main()
{
    int n,a[10],i,sum=0;
    clrscr();
    printf("\n enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    printf("%d",sum);
    getch();
}
