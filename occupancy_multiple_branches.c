/*Name:Sammy Njuguna 
Reg.no.CT101/G/28858/25
Date:25 Oct,2025
DescriptionRoom vacancy multiple branches
3D array
*/
#include <stdio.h>
 int main() {
     int i, j, k;
     int occupied = 0;
     int vacant = 0;
     // Number of rooms per each floor
     int occupancy[3][5][10] = {
         {
             {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
             {1, 1, 1, 1, 0, 0, 1, 1, 1, 1},
             {1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
             {1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
         },
         {
             {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
             {1, 1, 1, 1, 0, 0, 1, 1, 1, 1},
             {1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
             {1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
         },
         {
             {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
             {1, 1, 1, 1, 0, 0, 1, 1, 1, 1},
             {1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
             {1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
         }
     };
     printf("Occupied and vacant rooms per floor:\n");
     for (i = 0; i < 3; i++) {
         printf("Branch %d:\n", i + 1); 
         for (j = 0; j < 5; j++) {
             for (k = 0; k < 10; k++) {
                 printf("%d ", occupancy[i][j][k]);
             }
             printf("\n"); 
         }
         printf("\n"); 
     }
     // number of occupied and vacant rooms per floor
     printf("\nRoom Occupancy per Branch:\n");
     for (i = 0; i < 3; i++) { 
         for (j = 0; j < 5; j++) { 
             occupied = 0;
             vacant = 0;
             for (k = 0; k < 10; k++) { 
                 if (occupancy[i][j][k] == 1) {
                     occupied++;
                 } else {
                     vacant++;
                 }
             }
             printf("Branch %d\n, \nFloor %d: Occupied = %d, Vacant = %d\n", i + 1, j+ 1, occupied, vacant);
         }
     }
     return 0;
 }