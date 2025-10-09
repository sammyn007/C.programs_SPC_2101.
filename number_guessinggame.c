/*
Name:Sammy Njuguna 
Reg.no:CT101/G/28858/25
Date:4/10/25
Description:Number guessing game
*/
#include <stdio.h>
 int main() {
     int guess=1;
     int trials = 0;
     int secret_number = 7;
     
     //prompt user to guess a number
     printf("Guess a number between 1 and 20\n");
     
     while (guess <= 20) {
         printf("\nGuess a number:");  
         scanf("%d", &guess);  
         trials++; 
         
         if (guess > secret_number) {
             printf("Too high!\n");
             printf("trials %d\n", trials); 
             
         } else if (guess < secret_number) {
             printf("Too low!\n");
             printf("trials %d\n", trials); 
             
         } else {
             printf("Congratulations!\n");
             printf("You guessed it in %d trials!\n", trials);
             return 0;
         }
     }
     return 0;
 }