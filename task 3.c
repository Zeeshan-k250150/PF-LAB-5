#include <stdio.h>

int main() {
    int a, b;

    printf("Enter 1 for Books or 2 for Magazines: ");
    scanf("%d", &a);

    switch (a) {
        case 1: // Books
            printf("You selected Books.\n");
            printf("Enter 1 to Issue a Book or 2 to Return a Book: ");
            scanf("%d", &b);

            switch (b) {
                case 1:
                    printf("Book Issued Successfully!\n");
                    break;
                case 2:
                    printf("Book Returned Successfully!\n");
                    break;
                default:
                    printf("Invalid choice for book operation.\n");
            }
            break;

        case 2: // Magazines
            printf("You selected Magazines.\n");
            printf("Enter 1 to Issue a Magazine or 2 to Return a Magazine: ");
            scanf("%d", &b);

            switch (b) {
                case 1:
                    printf("Magazine Issued Successfully!\n");
                    break;
                case 2:
                    printf("Magazine Returned Successfully!\n");
                    break;
                default:
                    printf("Invalid choice for magazine operation.\n");
            }
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
