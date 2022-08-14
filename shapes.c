#include <stdio.h>

void drawH(int x);
void block(int x);
void space(int x);
int getInput(void);


int main(void) {

    drawH(getInput());
    
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

int getInput(void) {
    printf("Desired X value: \n");
    int a;
    scanf("%i", &a);
    return a;
}