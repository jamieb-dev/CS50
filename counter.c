#include <stdio.h>

//TASK: Gradually decrease "i" until any "desired" can be input.
//      The result will be the fastest possible way to count to any possible number.

int main(void){
    double inc = 1000;
    double desired;
    printf("Please enter a final number: ");
    scanf("%lf", &desired);
    for (double total = 0; total < desired;){
        for (double i = 0; i < inc; i++){
            total++;
        }
        printf("%f\n", total);
    }
    
    return 0;
}