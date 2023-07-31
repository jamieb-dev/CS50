#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void){
    char *s = "hi!";
    char *t = malloc(4);

    *t = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);

}