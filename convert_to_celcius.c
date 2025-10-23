/*
Name:Sammy Njuguna 
Reg.no.Ct101/G/28858/25
Date:10 Oct,2025
Description:converttocelcius
*/
#include <stdio.h>
function prototype 

float convert_to_celcius(float fahrenheit);

int main() {
//function call
    float celsius = convert_to_celcius(98.5);
    printf("%.2f°c", celsius);
    
}
//function declaration 
float convert_to_celcius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius; 
}