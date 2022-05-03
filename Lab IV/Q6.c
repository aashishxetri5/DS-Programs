/**
 * Find a number in an array using binary search.
 */

#include <stdio.h>

void searchForNumber(int *array, int numToBeSearched, int size) {
    
    int low = 0, high = size-1, flag = 0;
    int mid, i;

    for(i = 0; i < 10; i++) {
        printf("%d ", *(array+i));
    }

    while (low <= high) {
        mid = low + (high - low)/2;

        if ( *(array+mid) == numToBeSearched) {
            flag = 1;
            break;
        }

        if ( *(array+mid) > numToBeSearched) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if( flag ) {
        printf("\n'%d' found at index %d", numToBeSearched, mid) ;
    } else {
        printf("\n'%d' not found!", numToBeSearched) ;
    }
    

}

void descendingSort(int *array) {
    int i, j, temp;
    for(i = 0; i < 10; i++) {
        temp = *(array+i);
        j = i-1;
        while(j >=0 && *(array+j) < temp) {
            *(array+j+1) = *(array+j);
            j--;
        }
        *(array+j+1) = temp;
    }
}

int main() {

    int array[] = {23,46,7,-54,5,67,2,1,75,776}, number;

    printf("Enter the number to be searched: ");
    scanf("%d", &number);

    descendingSort(&array[0]);

    searchForNumber(&array[0], number, sizeof array/sizeof array[0]);



    return 0;
}