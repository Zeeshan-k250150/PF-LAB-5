#include <stdio.h>

int main() {
    int units;
    int bill=0;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = 500 + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = 1200 + (units - 200) * 10;
    }
    else {
        bill = 2200 + (units - 300) * 15;
    }

    printf("Electricity Bill = Rs. %d\n", bill);
    return 0;
}


