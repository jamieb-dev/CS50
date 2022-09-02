#include <stdio.h>

int arr[] = {2,3,4,6,7,3,4,5,1,3,4,6,8,4,2,3,5,2,6,4,1};
int arrLen = (sizeof(arr) / sizeof(int));


int main(void){
    // prints unsorted array

    for( int i = 0; i != arrLen; i++){
        printf("%i", arr[i]);
    }
    printf("\n");

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

    for( int i = 0; i != arrLen; i++){
        printf("%i", arr[i]);
    }
    printf("\n");
    return 0;
}