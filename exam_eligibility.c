/*
Name:Sammy Njuguna
Reg.No.:CT101/G/28858/25
Date:26th Sept 2025
Description:Exam eligibility
Attendance>=75%
Average marks>=40
*/
#include<stdio.h>

int main() {
    int attendance;
    int average_marks;

    printf("Enter your attendance:");
    scanf("%d",&attendance);

    if(attendance>=75) {
        printf("\nEnter your average_marks:");
    }
    else {
        printf("You are not eligible for exam");
    }
    scanf("%d",&average_marks);

    if(average_marks>=40)
    {
        printf("\nYou are eligible for exam");
    }
    else {
        printf("\nYou are not eligible for exam");
    }

    return 0;
}