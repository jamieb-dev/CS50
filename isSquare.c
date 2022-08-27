#include <stdio.h>

float squareRoot(float x);

int main(void){
    for (float i = 0; i < 500; i++){
        if(squareRoot(i) != 0) {
            printf("%.2f\n", i);
        }
    }



    return 0;
}

float squareRoot(float x){
    for(float i = 0; i <= x; i += 1){
        if((i * i) == x){
            return i;
        }
    }
}