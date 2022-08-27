#include <stdio.h>
#include <string.h>



char names[3][10] = {
    {'H', 'a', 'r', 'r', 'y', '\0'},
    {'R', 'o', 'n', '\0'},
    {'H', 'e', 'r', 'm', 'o', 'i', 'o', 'n', 'e', '\0'}

};

char shoppingList[10][20] = {
    "bread",
    "eggs",
    "milk",
    "Ron"
};

int shoeSizes[] = {5, 2, 10, 14, 6, 3, 4, 4, 3, 8};

int main(void){
    printf("%s\n", names[2]);
    printf("%s\n", shoppingList[2]);
    printf("%i\n", shoeSizes[2]);

    if (strcmp(shoppingList[3], names[1])) {
        printf("They are the same!\n");
    } else {
        printf("Not the same.\n");
    }
    
    
    
    return 0;
}