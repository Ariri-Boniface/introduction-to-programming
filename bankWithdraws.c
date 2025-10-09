/*
Name: ariri boniface
Reg No: PA106/G/28780/25
Description:
*/
#include <stdio.h>

int main() {
    float balance, amount;

    
    printf("Enter your account balance: ");
    scanf("%f", &balance);

    
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);

        balance -= amount; 
        printf("Current balance: %.2f\n", balance);
    }

    printf("Balance is zero. No more withdrawals allowed.\n");
    return 0;
}
