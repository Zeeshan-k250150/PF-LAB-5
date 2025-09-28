#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, root1, root2;
    printf("Enter coefficient a ");
    scanf("%lf", &a);
    printf("Enter coefficient b ");
    scanf("%lf", &b);
    printf("Enter coefficient c ");
    scanf("%lf", &c);

    d = b*b - 4*a*c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
    } else if (d == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and equal: %.2lf\n", root1);
    } else {
        printf("Roots are imaginary.\n");
    }
    return 0;
}
