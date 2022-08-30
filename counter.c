#include <stdio.h>

//TASK: Gradually decrease "i" until any "target" can be input.
//      The result will be the fastest possible way to count to any possible number.

int main(void){
    double inc = 1000;
    double target;
    printf("Please enter a final number: ");
    scanf("%lf", &target);
    for (double total = 0; total < target;){
        for (double i = 0; i < inc; i++){
            if((total + inc) > target){
                inc = inc/2;
            }
            total++;
        }
        printf("%f\n", total);
    }
    
    return 0;
}

