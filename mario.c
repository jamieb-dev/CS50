#include <stdio.h>


void drawSquare(int x);
void drawLine(int x);

int main() {
    int input;
    printf("How wide will your square be?:  ");
    scanf("%i", &input);
    drawSquare(input);
}

/*

sqaure(desired x amount)

    create y based on x
    //creates first row of the sqaure
    for ( create loop counter: j; check that: j < x ; then do:j++ ;)

    //repeats for desired amount of rows.
    for (create loop counter: k; check that k < y; j++ )


*/


void drawSquare(int x){
    for(int k = 0; k < (x/2); k++){
        drawLine(x);
    }
}


void drawLine(int l){
    for (int j = 0; j < l; j++){
    printf("#");
    }
    printf("\n");
}