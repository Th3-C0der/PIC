// Value Swap Code By Th3-C0der
#include<stdio.h>
#include<conio.h>
void main() {
    int a, b, c;
    printf("Enter Value Of a & b:");
    scanf("%d%d", &a, &b);
    printf("Values Before Swap\n");
    printf("a = %d\nb = %d\n",a,b);
    c = a;
    a = b;
    b = c;
    printf("Values After Swap\n");
    printf("a = %d\nb = %d\n",a,b);
    getch();
}
