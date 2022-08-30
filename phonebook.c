#include <stdio.h>
#include <string.h>

int main(void){

    char names[2][20] = {"Paul", "John"};
    char number[2][20] = {"01-21-do-one", "another number."};
    
    // Main Loop
    for(int i = 0; i==0;){
    char name[20];
    printf("Who's number do you require?: ");
    scanf("%s", name);
    for(int i = 0; i < 2; i++){
        if(strcmp(name, "Paul") == 0){
            printf("Found number for Paul: %s\n", number[i]);
            break;
        } else {
            printf("No number found.\n");
            break;
        }
    }
    }
return 0;
}

// recieves input (name) and returns the stored number