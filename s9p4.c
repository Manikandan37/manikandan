#include<stdio.h>
#include<conio.h>
void main() 
{
  char ch;
  clrscr();
  printf("Enter a character");
  scanf("%c",&ch);
  printf("ASCII value of the character %c is %d",ch,ch);
  getch();
}
