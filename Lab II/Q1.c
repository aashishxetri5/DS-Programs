/*
Write a program to implement Euclidean and Extended Euclidean algorithms
*/

#include <stdio.h>

int Euclidean(int a, int b) {
    if(a == 0) {
        return b;
    }
    return Euclidean(b%a, a);
}

int ExtendedEuclidean(int a, int b, int *x, int *y) {
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
    int x1, y1; // To store results of recursive call
    int gcd = ExtendedEuclidean(b%a, a, &x1, &y1);
 
    // Update x and y using results of
    // recursive call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;

}

int main() {
    int a = 555, b = 255, x, y;
    printf("Implementing Euclidean Algorith: \n");
    printf("%d", Euclidean(a, b));

    printf("\nImplementing Extendted Euclidean Algorithm: \n");
    printf("%d", ExtendedEuclidean(5562, 1238, &x, &y));

}