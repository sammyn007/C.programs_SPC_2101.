/*
Name:Sammy Njuguna
Reg.no.:CT101/G/28858/25
Date:19/09/2025
Description:Loan application 
*/
#include<stdio.h>
int main() {
    int age;
    float annual_income;
//prompt user to enter age
    printf("Enter your age:");
    scanf("%d",&age);

    if(age<21) {
        printf("Sorry  you  must be at least 21years to qualify for a loan");
    } else {
        printf("Enter your annual_income:");
    }
    scanf("%f",&annual_income);

    if(annual_income<21000) {
        printf("Sorry you must have an annual_income of at least sh.21000 to qualify for a loan");
    }
    else {
        printf("\nCongratulations you qualify for a loan");
        
        printf("\nUnfortunately, we are unable to offer you a loan at this time");
    }
    return 0;
}