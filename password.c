#include <stdio.h>
#include <string.h>

int main() {
    char password[4];
    char correct_password[] = "1234";

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, correct_password) != 0); 

    printf("Access Granted.");

    return 0;
}