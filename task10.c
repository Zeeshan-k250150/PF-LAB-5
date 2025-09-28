#include <stdio.h>
#include <string.h> 

int main() {
    int age, movie;
    char ticketType[30];
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 12) {
        strcpy(ticketType, "Child Ticket");
    } 
    else if (age <= 60) {
        strcpy(ticketType, "Adult Ticket");
    } 
    else {
        strcpy(ticketType, "Senior Citizen Ticket");
    }
    printf("Select a movie:\n");
    printf("1. Action\n2. Comedy\n3. Horror\n");
    printf("Enter choice: ");
    scanf("%d", &movie);

    switch (movie) {
        case 1:
            printf("%s + Action Movie Booked\n", ticketType);
            break;
        case 2:
            printf("%s + Comedy Movie Booked\n", ticketType);
            break;
        case 3:
            printf("%s + Horror Movie Booked\n", ticketType);
            break;
        default:
            printf("Invalid Movie Choice\n");
    }

    return 0;
}
