//Bitwise
#include <stdio.h>
#include <conio.h>
void main() {
    int a, b, c;
    printf("Enter The Value Of a & b: ");
    scanf("%d%d", &a, &b);
    c = a ^ b;
    printf("Result Is %d",c);
    getch();
}