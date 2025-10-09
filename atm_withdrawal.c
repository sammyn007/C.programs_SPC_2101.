#include<stdio.h>
int main() {

    int balance=1000;
    int amount;

    printf("Your current balance is:%d\n",balance);

    while(balance>0) {
        printf("\nEnter amount to withdraw:");
        scanf("%d",&amount);

        balance-= amount;
        printf("Your new balance is:%d\n",balance);

    }

    printf("Insufficient balance");


    return 0;
}