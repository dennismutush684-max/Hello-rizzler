//1D array
#include <stdio.h>

int main() {
    int i;
    int total = 0;
    float average;

    // Declare and initialize the array
    int revenue[7] = {10000, 9000, 8000, 7000, 6000, 5000, 4000};

    // for loop,loop
    for (i = 0; i < 7; i++) {
        printf("%d\n", revenue[i]);
        total = total + revenue[i];
    }

    // Calculate average
    average = (float) total / 7;

    // Display total and average
    printf("The total revenue is: %d\n", total);
    printf("The average revenue is: %.2f\n", average);

    return 0;
}
