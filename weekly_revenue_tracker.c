/*
Name:Sammy Njuguna
Reg.no.:CT101/G/28858/25
Date:24 Oct,2025
Description:weekly_revenue_tracker
1D array
*/
#include<stdio.h>

int main() {
    int i;
    int total_revenue=0;
    float average_revenue;
    /*
    declaration and intialization
    revenue for each day
    */
    int revenue[7]= {50,60,70,80,90,100,110};

    for (i=0; i<7; i++) {

        //display revenue for each day
        printf("%d\t",revenue[i]);

        //add each day revenue to total revenue
        total_revenue= total_revenue + revenue[i];
        //divide total_revenue by the number of days of the week
        average_revenue= total_revenue/7;
    }
    printf("\n");
    printf("\nTotal_weekly_revenue is:%d\n",total_revenue);
    printf("average_daily_revenue is:%.2f",average_revenue);

    return 0;
}