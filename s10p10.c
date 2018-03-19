#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r=1,rem=0;
    clrscr();
    printf("\n enter the number");
    scanf("%d",&n);
    while(n!='\0')
    {
        rem=n%10;
        r=r*rem;
        n=n/10;
    }
    printf("%d",r);
    getch();
}
