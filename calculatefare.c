/*
Name:Sammy Njuguna
Reg.no.CT101/G/28858/25
Date:10 Oct,2025
Description:calculate_fare
*/

#include<stdio.h>
//function prototype
float calculate_fare(float distance,float fare_rate);

void main() {
    float distance,fare_rate,total_fare;

    total_fare = calculate_fare(10, 50);

    printf("The total_fare is=Kes%.2f",total_fare);

}
//function declaration
float calculate_fare(float distance,float fare_rate) {
    float total_fare;

    total_fare= distance * fare_rate;


    return total_fare;
}