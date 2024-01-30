#include <stdio.h>
#include<conio.h>
void main() 
{ 
int n, c , fact=1;
printf("Type A Number:\n");
scanf("%d", &n);
if(n<0) {
printf("Number Should Be Non Negative");
}
else {
for(c=1 ; c<=n ; c++)
fact = fact*c;
printf("Factorial of %d is = %d", n, fact);
}
}
    