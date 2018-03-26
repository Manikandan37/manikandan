#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=0,n;
    clrscr();
    printf("Enter number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    getch();
}
