#include<stdio.h>
#include<conio.h>
void main() 
{
	int n,a,d,i,sum=0;
  clrscr();
  printf("\n enter the a,d,n values");
	scanf("%d %d %d",&a,&d,&n);
	for(i=0;i<n;i++)
    {
        sum=sum+(a+i*d);
    }
    printf("%d",sum);
	getch();
}
