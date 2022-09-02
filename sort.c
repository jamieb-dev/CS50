// a program to sort and print the elements in an array

#include <stdio.h>
#include <strings.h>

//TASK: Create a len() funtion for strings
//TASK: Create a arrLen() funtion for arrays
//TASK: Craete a sort function for arrays

int numbers[] = {5, 3, 2, 6, 2, 4, 7, 9};

int length = (sizeof(numbers) / sizeof(float));

int main(void) {

    for( int i = 0; i < (sizeof(numbers) / sizeof(float)); i++){
        if (i != (length - 2)){
            int j = (i+1);
            if (numbers[i] > numbers[j]){
                int k = i;
                i = j;
                j = k;
        }

        }
    }
    for(int i = 0; i < length; i++){
        printf("%i ", numbers[i]);
    }
    printf("\n");


    return 0;

}

// i = 0
// j = (i + 1)

// if numbers[i] > numbers[j] then
//     k = i
//     i = j
//     j = k

