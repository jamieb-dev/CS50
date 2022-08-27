#include <stdio.h>

void drawH(int x);
void topRow(int x);
void midRow(int x);
void block(int x);
void space(int x);
int getInput(void);
void square(int X);
void rectangle(int x, int y);


// TASK: Fix format issue when x is 20
// TASK: add other characters


int main(void) {
    rectangle(10, 15);
    printf("\n");
    drawH(getInput());
    square(getInput());
    
    return 0;
}

void block(int x){
    for(int j = 0; j < x/3; j++) {
        printf("#");
    }
}

void space(int x){
for (int j = 0; j < x/3; j++) {
        printf(" ");
    }
}
/*
void drawH(int x) {
    block(x);
    space(x);
    block(x);
    printf("\n");
    block(x);
    block(x);
    block(x);
    printf("\n");
    block(x);
    space(x);
    block(x);
    printf("\n");
    
}
*/

int getInput(void) {
    printf("Desired X value: \n");
    int a;
    scanf("%d", &a);
    return a;
}

void drawH(int x) {
    topRow(x);
    midRow(x);
    topRow(x);
}

void topRow(int x){
    for (int i = 0; i < x/3; i++){
    for (int i = 0; i < x/3; i++){
        block(x/3);
    }
    for (int i = 0; i < x/3; i++){
        space(x/3);
    }
    for (int i = 0; i < x/3; i++){
        block(x/3);
    }
    printf("\n");
    }
}

void midRow(int x){
    for (int i = 0; i < x/3; i++){
    for (int i = 0; i < x; i++){
        block(x/3);
    }
    printf("\n");
    }
}

void square(int x) {
    for (int i = 0; i < x/2; i++) {
        for (int i = 0; i < x; i++) {
            printf("#");
    }
    printf("\n");
    }
}

void rectangle(int x, int y){
    for (int i = 0; i < y/2; i++) {
        for (int i = 0; i < x; i++) {
            printf("#");
    }
    printf("\n");
    }
}