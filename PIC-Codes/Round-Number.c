#include<stdio.h>
#include<conio.h>
void main()
{
float num;
int roundnum;
clrscr();
printf ("Enter a real no:");
scanf("%f" ,&num);
roundnum = (int) (num+0.5);
printf ("Rounded no. is %d", roundnum);
getch();
}
    