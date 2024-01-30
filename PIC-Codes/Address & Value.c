//WAP to print address and value of variable 
#include <stdio.h>
int main()
{
int a;
printf("Enter A Number: ");
scanf("%d",&a);
printf("Value Of Variable Is %d\n",a);
printf("Address Of Variable Is %u",&a);
return 0;
}