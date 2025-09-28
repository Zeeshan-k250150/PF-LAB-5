#include <stdio.h>
#include <string.h>

int main() {
    char user[20], password[20];

    printf("Enter username: ");
    scanf("%s", user);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(user, "admin") == 0) {
        if (strcmp(password, "1234") == 0) {
            printf("Login Successful\n");
        } else {
            printf("Incorrect Password\n");
        }
    } else {
        printf("Invalid Username\n");
    }
    return 0;
}

