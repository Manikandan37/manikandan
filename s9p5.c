#include<stdio.h>
#include<conio.h>
void main()
{
  char ch[50];
  int l,i,A;
  clrscr();
  printf("Enter a string");
  scanf("%s",ch);
  l=strlen(ch);
  for(i=0;i<=l;i++)
  {
    if(i%2==0)
    {
      printf("%c",ch[i]);
    }
  }
  printf("\t");
  for(i=0;i<=l;i++)
  {
    if(i%2!=0)
    {
      printf("%c",ch[i]);
    }
  }
  
  getch();
}
