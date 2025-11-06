/*
Name:SammNjuguna 
Reg.no.:CT101/G/28858/25
Date:1 Nov,2025
Description:retail shop transactions
*/
#include <stdio.h>
 #include <stdlib.h>
 int main() {
     FILE *fptr;
     float transaction_amount, total_sales = 0.0;
     fptr = fopen("sales.txt", "r");
     if (fptr == NULL) {
         printf("Error opening file!\n");
         return 1;
     }
     // Read transactions from the file
     while (fscanf(fptr, "%f", &transaction_amount) == 1) {
         total_sales += transaction_amount;
     }
     //Display total sales of the day
     printf("Total sales for the day: %.2f\n", total_sales);
     fclose(fptr);
     return 0;
 }