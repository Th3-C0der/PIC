//WAP to check whether seller made profit or loss
#include<stdio.h>
#include<conio.h>
void main()
{
int cost, selling;
clrscr();
printf("Enter Cost Price:");
scanf("%d",&cost);
printf("Enter Selling Price:");
scanf("%d",&selling);
if (cost<selling){
printf("He Made Profit Of %d", selling-cost); 
}
else{
printf ("He Made Loss of %d",cost-selling);
}
getch();
}