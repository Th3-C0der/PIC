//WAP To Determine Whether The Entered Year Is Leap Year Or Not
#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("Enter The Year:");
scanf("%d",&year);
if (year%4==0){
printf("The Year %d Is A Leap Year",year); 
}
else{
printf ("The Year %d Is Not A Leap Year",year);
}
getch();
}