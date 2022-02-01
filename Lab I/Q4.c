#include <stdio.h>

int i;

void printQ4aFuzzySet(int age[], char names[][15]){

    printf("Question (4a): \n");

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
    
}

void printQ4bFuzzySet(int age[], char names[][15]){

    printf("\nQuestion (4b): \n");

    printf("{");
    
    for(i = 0; i<5; i++) {
        printf("(%s, ", names[i]);
       if(age[i] <= 15){
           printf("1), ");
       } else if (age[i] > 35){
           printf("0), ");
       } else {
           printf("%.2lf), ", (35.0-age[i])/20);
       }
    }
    
    printf("}");

}

