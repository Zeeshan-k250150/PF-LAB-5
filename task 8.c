#include <stdio.h>
#include <math.h>

int main() {
    double P, r, T, EMI;
    int type;

    printf("Enter loan amount: ");
    scanf("%lf", &P);
    printf("Enter time in years: ");
    scanf("%lf", &T);
    printf("Interest type (1: Simple, 2: Compound): ");
    scanf("%d", &type);

    r = 0.10; // 10% annual interest assumed

    if (type == 1) {
        double SI = (P * r * T);
        EMI = (P + SI) / (T*12);
        printf("Monthly EMI (Simple Interest) = %.2lf\n", EMI);
    } else if (type == 2) {
        double A = P * pow((1 + r), T);
        EMI = A / (T*12);
        printf("Monthly EMI (Compound Interest) = %.2lf\n", EMI);
    } else {
        printf("Invalid type.\n");
    }
    return 0;
}

