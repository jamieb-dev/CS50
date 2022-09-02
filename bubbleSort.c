#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){


    // initialises array
    int x = atoi(argv[1]);
    int arr[x];


    // populates array
    for(int i = 0; i < x; i++){;
        arr[i] = rand();
    }


    // determines length of arr
    int arrLen = (sizeof(arr) / sizeof(int));


    // prints unsorted array

    /*
    printf("Unsorted: ");
    for( int i = 0; i != arrLen; i++){
        printf("%i, ", arr[i]);
    }
    printf("\n\n\n");
    */


    // sorts array

    for( int i = 0; i != arrLen; i++){
        for( int i = 0; i < (arrLen - 1); i++){
            int j = (i+1);
            if( arr[i] > arr[j]){
                int k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
    }



    // prints sorted array

    /*
    
    printf("Sorted: ");
    for( int i = 0; i != arrLen; i++){
        printf("%i, ", arr[i]);
    }
    printf("\n\n\n");

    */

    return 0;
}