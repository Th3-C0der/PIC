//Program To Check Whether Entered Character In AlphaNumeric Or Not
#include <stdio.h>
#include <conio.h>
int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z') || (character >= '0' && character <= '9')) {
        printf("%c is alphanumeric.\n", character);
    } else {
        printf("%c is not alphanumeric.\n", character);
    }
    getch();
}