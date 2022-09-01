#include <stdio.h>
#include <string.h>


typedef struct {
    char flavour[20];
    float price;
    int ammount;
} stock;


stock syrups[4];

int main(void){
    
    stock drizzles[3];

    drizzles[0].ammount = 6;
    strcpy(drizzles[0].flavour, "Caramel");

    strcpy(drizzles[1].flavour, "Raspberry");
    drizzles[1].ammount = 3;

    strcpy(drizzles[2].flavour, "Chocolate");
    drizzles[2].ammount = 3;


    stock bases[6];

    bases[0].ammount = 1;
    strcpy(bases[0].flavour, "Mango and Pineapple");

    strcpy(bases[1].flavour, "Strawberry Lemonade");
    bases[1].ammount = 1;

    printf("Item: %s\n", bases[0].flavour);
    printf("Ammount: %d\n", bases[0].ammount);



    return 0;
}