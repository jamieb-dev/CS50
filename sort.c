// a program to sort and print the elements in an array

#include <stdio.h>
#include <strings.h>

//TASK: Create a len() funtion for strings
//TASK: Create a arrLen() funtion for arrays
//TASK: Craete a sort function for arrays

float numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};


int main(void) {

    for( int i = 0; i < (sizeof(numbers) / sizeof(float)); i++){
        printf("%.1f, ", numbers[i]);
    }
    printf("\n");


    return 0;

}