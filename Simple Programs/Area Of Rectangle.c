#include<stdio.h>
int main() {
    int l,b,area;
    printf("Enter Length & Breadth Of Rectangle:");
    scanf("%d %d", &l, &b);
    area = l*b;
    printf("Area Of Rectangle Is: %d",area);
    return 0;
}