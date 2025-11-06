/*
Name:Sammy Njuguna 
Reg.No.CT101/G/28858/25
Date:1 Nov,2025
Description:Student information 
*/
#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 // Structure to hold student information
 struct Student {
     char name[50];
     int registrationNumber;
     float totalMarks;
 };
 int main() {
     FILE *fptr;
     struct Student student;
     fptr = fopen("results.dat", "r");
     if (fptr == NULL) {
         printf("Error opening file!\n");
         return 1;
     }
     printf("Student Records:\n");
     
     // Read all student records from the binary file
     while (fread(&student, sizeof(struct Student), 1, fptr) == 1) {
     
         // Display the name and marks of each student
         printf("Name: %s\n", student.name);
         printf("Registration Number: %d\n", student.registrationNumber);
         printf("Total Marks: %.2f\n", student.totalMarks);
         printf("\n");
     }
     fclose(fptr);
     return 0;
 }