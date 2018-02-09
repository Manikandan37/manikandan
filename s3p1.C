#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,n,value,sum=0,i;
clrscr();
printf("Enter the number of terms in AP series\n");
scanf("%d",&n);
printf("Enter first term and common difference of AP series\n");
scanf("%d%d",&a,&b);
value=a;
printf("AP SERIES\n");
for(i=0;i<n;i++)
{
printf("%d",value);
sum+=value;
value=value+b;
}
printf("\nSum of the AP series till %d terms is %d\n",n,sum);
getch();
}
