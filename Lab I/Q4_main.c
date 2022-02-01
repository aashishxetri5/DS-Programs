/*

*/

#include <stdio.h>
#include "Q4.c"

int main() {

    char names[5][15];
    int age[5], i, j;

    for(i = 0; i<5; i++) {
        printf("Enter name and age of the person: ");
        scanf(" %s %d", names[i], &age[i]);
    }

    printQ4aFuzzySet(age, names);  
    printQ4bFuzzySet(age, names);  

    return 0;
}