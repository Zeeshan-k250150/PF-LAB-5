#include <stdio.h>
#include <math.h>

int main() {
    int shape, option;
    double r, l, w, b, h,p;

    printf("Shapes:\n1. Circle\n2. Rectangle\n3. Triangle\nEnter choice: ");
    scanf("%d", &shape);

    switch (shape) {
        case 1:
            printf("1. Area\n2. Perimeter\nEnter choice: ");
            scanf("%d", &option);
            printf("Enter radius: ");
            scanf("%lf", &r);
            switch (option) {
                case 1: printf("Area = %.2lf\n", M_PI*r*r); break;
                case 2: printf("Perimeter = %.2lf\n", 2*M_PI*r); break;
                default: printf("Invalid choice.\n");
            }
            break;

        case 2:
            printf("1. Area\n2. Perimeter\nEnter choice: ");
            scanf("%d", &option);
            printf("Enter length and width: ");
            scanf("%lf %lf", &l, &w);
            switch (option) {
                case 1: printf("Area = %.2lf\n", l*w); break;
                case 2: printf("Perimeter = %.2lf\n", 2*(l+w)); break;
                default: printf("Invalid choice.\n");
            }
            break;

        case 3:
            printf("1. Area\n2. Perimeter\nEnter choice: ");
            scanf("%d", &option);
              switch (option) {
                 case 1: printf("Enter base and height: ");
                         scanf("%lf %lf", &b, &h);
                         break;
                 case 2:
                    printf("Enter side 1 side 2 and seid 3: ");
                    scanf("%lf %lf %lf", &b, &h,&p);
                    printf("Perimeter = %lf\n", p+b+h); break;
                    default: printf("Invalid choice.\n");
            }
            break;

        default:
            printf("Invalid shape.\n");
    }
    return 0;
}

