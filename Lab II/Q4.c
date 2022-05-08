#include <stdio.h>
 
void primeFactorization(int n, int i) 
{ 
	if ((n % i) == 0) 
	{ 
		printf("%d", i); 
		(n != i) ? printf(" x ") : printf(""); 
		n /= i;
		primeFactorization(n, i); 
	} 
	else if (i < n) 
		primeFactorization(n, (i + 1)); 
} 
 
int main() 
{ 
	int num; 
	printf("Enter a number : ");
	scanf("%d",&num);

    if(num > 0) {
	    printf("Prime Factorization: ");
	    primeFactorization(num,2); 
    } else {
        printf("Invalid input!");
    }

    return 0;

}