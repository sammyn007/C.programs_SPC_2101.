/*
Name:Sammy Njuguna
Reg no:CT101/G/28858/25
Date:10 Oct,2025
Description:Calculate electric bill
*/

#include <stdio.h>
//function prototype

float calculate_electric_bill(int units);
void main() {
    int units;
    float total_bill;
    //function call

    total_bill = calculate_electric_bill(250);

    printf("Total bill: %.2f\n", total_bill);

}
//function declaration
float calculate_electric_bill(int units) {
    float total_bill = 0.0;
    if (units >= 0 && units < 100) {
        total_bill = units * 10;
    } else if (units >= 100 && units < 200) {
        total_bill = 100 * 10 + ((units - 100) * 15);
    } else {
        total_bill = 100 * 10 + 100 * 15 + ((units - 200) * 20);
    }
    return total_bill;
}