#include <stdio.h>

int main() {
    int dept, course;
    printf("Departments:\n1. CS\n2. EE\n3. BBA\nEnter dept: ");
    scanf("%d", &dept);

    switch (dept) {
        case 1:
            printf("CS Courses:\n1. Data Structures\n2. Algorithms\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("Registered: Data Structures\n"); break;
                case 2: printf("Registered: Algorithms\n"); break;
                default: printf("Invalid Course.\n");
            }
            break;

        case 2:
            printf("EE Courses:\n1. Circuits\n2. Signals\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("Registered: Circuits\n"); break;
                case 2: printf("Registered: Signals\n"); break;
                default: printf("Invalid Course.\n");
            }
            break;

        case 3:
            printf("BBA Courses:\n1. Finance\n2. Marketing\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("Registered: Finance\n"); break;
                case 2: printf("Registered: Marketing\n"); break;
                default: printf("Invalid Course.\n");
            }
            break;

        default:
            printf("Invalid Department.\n");
    }
    return 0;
}

