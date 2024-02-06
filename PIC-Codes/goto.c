#include <stdio.h>
#include <conio.h>
void main() {
    goto jump;
    printf("This Will Not Get Executed");
    jump:
    printf("This Will Get Executed!");
    getch();
}