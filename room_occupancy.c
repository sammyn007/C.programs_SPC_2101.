/*
Name:Sammy Njuguna 
Reg.no.:CT101/G/28858/25
Date:25 Oct,2025
DescriptionRoom occupancy 
2D array
*/
#include <stdio.h>
 int main() {
     int i, j;
     int occupied = 0;
     int vacant = 0;
     // Number of rooms per each floor
     int occupancy[5][10] = {
         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},  
         {1, 1, 1, 1, 0, 0, 1, 1, 1, 1},
         {1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
         {1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
         {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}  
     };
     printf("Occupied and vacant rooms per floor:\n");
     for (i = 0; i < 5; i++) {
         for (j = 0; j < 10; j++) {
             printf("%d ", occupancy[i][j]);
         }
         printf("\n");
     }
     // Display number of occupied and vacant rooms per floor
     printf("\nRoom Occupancy per Floor:\n");
     for (i = 0; i < 5; i++) {
         occupied = 0; 
         vacant = 0;
         for (j = 0; j < 10; j++) {
             if (occupancy[i][j] == 1) {
                 occupied++;
             } else {
                 vacant++;
             }
         }
         printf("Floor %d: Occupied = %d, Vacant = %d\n", i + 1, occupied, vacant);
     }
     return 0;
 }