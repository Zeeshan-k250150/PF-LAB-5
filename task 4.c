#include <stdio.h>

int main() {
    int category, item;
    printf("Menu:\n1. Fast Food\n2. Drinks\nEnter category: ");
    scanf("%d", &category);

    switch (category) {
        case 1:
            printf("Fast Food:\n1. Burger\n2. Pizza\nEnter choice: ");
            scanf("%d", &item);
            switch (item) {
                case 1: printf("Burger Ordered!\n"); break;
                case 2: printf("Pizza Ordered!\n"); break;
                default: printf("Invalid Fast Food choice.\n");
            }
            break;

        case 2:
            printf("Drinks:\n1. Coke\n2. Juice\nEnter choice: ");
            scanf("%d", &item);
            switch (item) {
                case 1: printf("Coke Ordered!\n"); break;
                case 2: printf("Juice Ordered!\n"); break;
                default: printf("Invalid Drink choice.\n");
            }
            break;

        default:
            printf("Invalid category.\n");
    }
    return 0;
}
