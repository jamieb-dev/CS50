#include <stdio.h>

float discount(float price);


int main() {
    // float regular;
    // printf("Regular Price: ");
    // scanf("%f", &regular);
    // float sale  = regular * .85;
    // printf("Sale Price: %.2f\n", sale);

    printf("£%.2fp\n", discount(155));

    return 0;
}

float discount(float price) {
    return price * 0.85;
}