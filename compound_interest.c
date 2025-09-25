/*
Name:Sammy Njuguna
Reg.no.:CT101/G/28858/25
Date:19 sep 2025
Description:compound_interest
A=p(1+r/100)^(n*t)
*/
#include <stdio.h>
#include<math.h>

int main() {
    int n;
    float principal,rate,time,amount,compound_interest;

//prompt user to enter
    printf("Enter principal amount:");
    scanf("%f",&principal);

    printf("\nEnter interest rate:");
    scanf("%f",&rate);

    printf("\nEnter total number of years:");
    scanf("%f",&time);

    printf("\nEnter number of compounding per year:");
    scanf("%d",&n);

    amount=principal*pow((1+rate/100/n),(n*time));
    compound_interest=amount - principal;

    printf("\nCompound_interest is: %2f",compound_interest);
    return 0;
}

    