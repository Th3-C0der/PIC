//WAP to print ASCII value for entered character 
#include <stdio.h>
#include <conio.h>
void main()
{
char ch;
printf("Enter A  Character: ");
scanf("%c",&ch);
printf("ASCII Value Of %c is %d",ch,ch);
getch();
}