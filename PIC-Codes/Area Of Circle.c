#include<stdio.h>
#include<conio.h>
void main() {
    float r,a;
    printf("Enter Radius Of Circle:");
    scanf("%f", &r);
    a = 3.14*r*r;
    printf("Area Of Circle Is:%f",a);
    getch();
}