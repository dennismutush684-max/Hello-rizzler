#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0));
    secret = (rand() % 20) + 1; // 1 to 20

    printf("Guess the number between 1 and 20!\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("Total attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}