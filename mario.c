#include <stdio.h>


void square(void);

int main() {
    square();
    printf("\n");
    square();
    return 0;
}


void square(void) {
    for (int y = 0; y < 3; y++){
    for (int x = 0; x < 6; x++) {
        printf("#");
    }
    printf("\n");
}
}