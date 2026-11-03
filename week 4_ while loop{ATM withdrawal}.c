#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance = balance - withdraw;
        
        if (balance > 0) {
            printf("Remaining balance: %.2f\n", balance);
        } else {
            printf("Balance is now: %.2f - Account empty!\n", balance);
        }
    }

    return 0;
}