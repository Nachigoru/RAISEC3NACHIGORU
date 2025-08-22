#include <stdio.h>

int main() {
    int choice;
        float balance = 0.0, amount; 

        while(1) {
            printf("====== ATM MENU ======\n");
            printf("1. Check balance\n");
            printf("2. Deposit money\n");
            printf("3. Withdraw money\n");
            printf("4. Exit\n");
            printf("Choose an option: ");
            scanf("%d", &choice);

        switch (choice) {
            case 1: 
            printf("Current Balance %.2f\n", balance);
            break;
        
            case 2:
            printf("Enter the amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                balance += amount;
                printf("Deposit Successful.\n");
            } else {
                printf("Invalid amount, Please try again.\n");
            }
            break;
            
         case 3:
            printf("Enter the amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Withdrawal Successful.\n");
            } else if (amount > balance) {
                printf("Insufficient Balance, Please try again\n"); 
            } else {
                printf("Invalid withdrawal amount, Please try again.\n");
            }
            break;

        case 4:
        printf("Thank you for using the ATM service.\n");
        return 0;
        default:
            printf("Invalid option, Please try again");
            }
        }
    return 0;
}