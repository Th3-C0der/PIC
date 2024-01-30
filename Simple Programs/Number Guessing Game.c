#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define green  "\x1B[32m"
#define red  "\x1B[31m"
#define reset "\x1B[0m" 
int main() {
    int number, guess, number_of_guesses = 0;
    srand(time(NULL));
    number = rand() % 100 + 1;
    printf("Guess a Number Between 1 and 100 :\n");
    do {
        if (number_of_guesses > 9) {
            printf(red"\nYou Lose!\n"reset);
            break;
        }
        scanf("%d", &guess);
        if (guess > number) {
            printf("Lower number please!\n");
            number_of_guesses++;
        } else if (number > guess) {
            printf("Higher number please!\n");
            number_of_guesses++;
        } else {
            printf(green"You guessed the number in %d attempts!\n"reset, number_of_guesses);
        }
    } while (guess != number);
    return 0;
}
    