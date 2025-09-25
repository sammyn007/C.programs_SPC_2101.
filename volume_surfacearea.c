/*
Name:Sammy Njuguna
Reg.no.:CT101/G/28858/25
Date:19 Sep.2025
Description:Program to compute volume and surface area of a cylinder
volume =pi*radius*radius*height
surface_area=2*pi*radius*radius*height+2*pi*radius*height
*/
#include<stdio.h>

int main() {
    float radius,height,volume,surface_area,pi=3.14159265359;

    //prompt user to enter radius
    printf("\nEnter radius of cylinder:");
    scanf("%f", &radius);

    //prompt user to enter height
    printf("\nEnter height of cylinder:");
    scanf("%f", &height);

    volume=pi*radius*radius*height;
    surface_area=2*pi*radius*radius+2*pi*radius*height;

    printf("\nvolume of cylinder is: %.2f\n", volume);

    printf("\nsurface_area of cylinder is:%.2f", surface_area);
    
    return 0;
}