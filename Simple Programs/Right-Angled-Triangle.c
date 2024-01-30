//Program To Find Whether A Triangle Is Right Angled Or Not
#include <stdio.h>
#include <conio.h>
void main() {
    int a, b, c;
    printf("Enter The Value Of Sides Of A Triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
        printf("The Triangle Given Is A Right Angled Triangle");
    } else {
        printf("The Triangle Given Is Not A Right Angled Triangle");
    }
    getch();
}