#include <stdio.h>
#include<conio.h>
void main()
{
    char c;
    int yen,ney;
    clrscr();
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    yen=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    ney=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(yen||ney)
    printf("%c is a vowel.", c);
    else
    printf("%c is a consonant.", c);
    getch();
}
