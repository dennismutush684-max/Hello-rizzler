#include <stdio.h>

int calculateFare(int distance) {
    return distance * 50;
}

int main() {
    int distance;
    printf("Enter distance in km: ");
    scanf("%d", &distance);
    printf("Total fare = KSh. %d\n", calculateFare(distance));
    return 0;
}