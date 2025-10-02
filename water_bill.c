/*
Name:Sammy Njuguna
Reg.No:CT101/G/28858/25
Date:26th Sept 2025
Description:Water bill calculator
*/
#include<stdio.h>
int main() {
    int units;
    float KES_per_unit,total_bill;

    printf("Enter number of water units consumed:");
    scanf("%d",&units);

    if (units<=30) {
        total_bill= 20 * units;
    }
    else if(units>=31 && units<=60) {
        total_bill= (30*20)+((units-30)*25);
    }
    else if(units>60) {
        total_bill= (30*20)+(30*25)+((units-60)*30);
    }

    printf("Total_bill is:%.2f KES",total_bill);

    return 0;
}