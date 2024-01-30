#include<stdio.h>
#include<conio.h>
void main() {
    float b,h,area;
    printf("Enter Height & Base Of Triangle:");
    scanf("%f%f", &h, &b);
    area = 0.5*b*h;
    printf("Area Of Triangle Is:%f",area);
    getch();
}