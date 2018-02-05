#include<stdio.h>
#include<conio.h>
void main()
{
int n,min,sec;
clrscr();
printf("Enter time in minutes:");
scanf("%d",&n);
min = n/60;
sec = n%60;
min = min%60;
printf("Converted format %d mins %d secs",min,sec);
getch();
}
