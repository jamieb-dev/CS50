#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char hairColour[20];
}
characters;




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
    characters character[5];

    strcpy(character[0].name, "Harry");
    strcpy(character[0].hairColour, "Dark Brown");

    strcpy(character[1].name, "Ron");    
    strcpy(character[1].hairColour, "Ginger");

    strcpy(character[2].name, "Hermoine");
    strcpy(character[2].hairColour, "Brown");

    strcpy(character[3].name, "Fred");
    strcpy(character[4].name, "George");

    strcpy(character[3].hairColour, "Ginger");



    printf("%s\n", names[2]);
    printf("%s\n", shoppingList[2]);
    printf("%i\n", shoeSizes[2]);

    if (strcmp(shoppingList[3], names[1])) {
        printf("They are the same!\n");
    } else {
        printf("Not the same.\n");
    }
    puts(character[2].name);
    
    
    
    return 0;
}