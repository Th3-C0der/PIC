#include <stdio.h>
#include<conio.h>
#define RED_TEXT   "\x1B[31m"
#define RESET_TEXT "\x1B[0m"

int main() {
    int i, j, n;
    printf("Enter The Size Of Pattern: ");
    scanf("%d", &n);
    clrscr();
    for (i = n / 2; i <= n; i += 2) {
        for (j = 1; j < n - i; j += 2) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf(RED_TEXT "*");
        }

        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf(RED_TEXT "*");
        }

        printf(RESET_TEXT "\n");
    }

    for (i = n; i >= 1; i--) {
        for (j = i; j < n; j++) {
            printf(" ");
        }

        for (j = 1; j <= (i * 2) - 1; j++) {
            printf(RED_TEXT "*");
        }

        printf(RESET_TEXT "\n");
    }

    return 0;
}