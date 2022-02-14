/*
Write a program that takes name and age of a 5 persons as an input and 
gives the degree of membership of the person as its output according to 
following membership functions.

Perform set operations according to rules of fuzzy sets, on these 
two sets.
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