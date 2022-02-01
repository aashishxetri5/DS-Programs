/*

*/

#include <stdio.h>

int main() {

    char names[5][15];
    int age[5], i, j;
    double degree[5];


    for(i = 0; i<5; i++) {
        printf("Enter name and age of the person: ");
        scanf(" %s %d", names[i], &age[i]);
    }

    printf("{");
    for(i = 0; i<5; i++) {
        printf("(%s, ", names[i]);
       if(age[i] <= 20){
           printf("1), ");
       } else if (age[i] > 30){
           printf("0), ");
       } else {
           printf("%.2lf), ", (30.0-age[i])/10);
       }
    }
    printf("}");


    return 0;
}