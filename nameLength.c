#include <stdio.h>

int find(int x);

int names[] = {1, 5, 2, 7, 8, 2, 5, 8, 5, 0};
int namesSize = sizeof(names);
int intSize = sizeof(int);
    
int main(void) {

    // prints if a value is in the array of not
    // for each element(i) check if it has the value of input(x)
    
    //gets number to check against array
    int z = 0;
    int x;
    scanf("%i", &x);
    find(x);
    return 0;
    
}

int find(int x) {
    int namesLength = (namesSize / intSize);
    int names[namesLength];
    for(int i = 0; i < namesLength; i ++){
        if( x == names[i]) {
            printf("Found\n");
            return 0;
        }
    }
    return 0;
}