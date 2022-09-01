#include <stdio.h>
#include <string.h>

typedef struct{

    char name;
    char number;

/*
    char names[2][20] = {"Paul", "John"};
    char number[2][20] = {"01-21-do-one", "another number."};
*/

} person;





int main(void){

    person people[2];

    people[0].name = "Paul";
    people[0].number = "+01-21-do-one";

    people[1].name = "John";
    people[1].number = "+447979268663";
    
    // Main Loop
    for(int i = 0; i==0;){
    char name[20];
    printf("Who's number do you require?: ");
    scanf("%s", name);
    for(int i = 0; i < 2; i++){
        if(strcmp(people[i].name, "Paul") == 0){
            printf("Found number for Paul: %s\n", number[i]);
            break;
        }else if (strcmp(name, "John") == 0){
            printf("Found number for John: %s\n", number[i]);
        } else {
            printf("No number found.\n");
            break;
        }
    }
    }
return 0;
}

// recieves input (name) and returns the stored number