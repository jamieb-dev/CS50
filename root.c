#include <stdio.h>

float squareRoot(float x);

int main(void) {
    float input;
    while(input != 0){
        printf("Please enter a number: ");
        scanf("%f", &input);
        printf("%.2f\n", squareRoot(input));

    }
}

float squareRoot(float x){
    for(float i = 0; i <= x; i += 1){
        if((i * i) == x){
            return i;
        }
    }
}