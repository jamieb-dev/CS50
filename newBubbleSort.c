#include <stdio.h>
#include <stdlib.h>

int randInt(int min, int max){
    int r;
    for(int i = 0; r < min && r > max;i++){
        r = rand();
    } return r;
}

int main(int argc, char *argv[]){
    
    // initates array

    int arrLength = atoi(argv[1]);
    int arr[arrLength];

    // populates array
    
    for(int i=0; i <= arrLength; i++){
        arr[i] = randInt(0, 9);
    }

    // prints unsorted array

    printf("Unsorted: ");
    for(int i=0; i <= arrLength; i++){
        printf("%i, ", arr[i]);
    }
    printf("\n");

    // sorts array

    for(int i = 0; i <= arrLength;i++){
        int j = (i+1);
        if(arr[i] > arr[j]){
            int k = arr[i];
            arr[i] = arr[j];
            arr[j] = k;
        }
    }


    // prints sorted array

    printf("Sorted: ");
    for(int i=0; i <= (arrLength - 1); i++){
        printf("%i, ", arr[i]);
    }
    printf("\n");

    return 0;
}