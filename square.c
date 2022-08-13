#include <stdio.h>

void square(int x);
int getX();

int x;

int main(void) {

    square(getX());
    
    
    
    
    return 0;
}

int getX(void){
    printf("X value for square: ");
    int width;
    scanf("%i", &width);
    return width;
}


void square(int x){
    for(int i = 0; i < x/2; i++){
        for(int j = 0; j < x; j++){
            printf("#");
        }
        printf("\n");
    }
}