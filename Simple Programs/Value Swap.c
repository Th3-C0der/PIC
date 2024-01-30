// Value Swap Code By Th3Coder
#include<stdio.h>
#include<conio.h>
void main() {
    int a, b, c;
    printf("Enter Value Of a:");
    scanf("%d", &a);
    printf("Enter Value Of b:");
    scanf("%d", &b);
    printf("Values Before Swap\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    c = a;
    a = b;
    b = c;
    printf("Values After Swap\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    getch();
}