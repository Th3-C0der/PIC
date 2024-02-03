//Program To Get Marks Grade Using Switch Statements
#include <stdio.h>
#include<conio.h>
void main()
{
float marks;
char grade;
clrscr();
printf("Enter Marks: ");
scanf("%f",&marks);
switch((int)marks/10){
case 10:
case 9:
grade = 'A+';
break;
case 8:
grade = 'A';
break;
case 7:
grade ='B';
break;
case 6:
grade ='C';
break;
case 5:
grade ='D';
break;
default :
grade ='F';
}
printf ("Grade: %c",grade);
getch();
}