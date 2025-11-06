/*
Name:Sammy Njuguna
Reg.No.:CT101/G/28858/25
Date:1 Nov,2025
Description:Library book tracking 
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char book_title[100];

    // Open the file 
    fptr = fopen("borrowed_books.txt", "a");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // prompt user to enter book title
    printf("Enter the title of the book: ");
    fgets(book_title, sizeof(book_title), stdin);

    // save the title to the file borrowed_books.txt
    fprintf(fptr, "%s", book_title);

    // Close the file
    fclose(fptr);

    // Tell the user file stored successfully 
    printf("Book title successfully stored.\n");

    return 0;
}