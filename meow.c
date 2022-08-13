#include <stdio.h>

void meow(int j);


int main() {
    meow(6);


    return 0;
}




void meow(int j) {
    for (int i = 0; i <= j; i++){
    printf("meow\n");
    }
}