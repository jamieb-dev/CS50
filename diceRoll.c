#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    
    srand(time(NULL));
    int diceRoll = (rand() % 6) + 1;
    printf("%i\n", diceRoll);
    return 0;
}