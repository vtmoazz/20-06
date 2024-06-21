//Q3
/*Write a function swap that swaps two numbers. Then, sort an array of 5 numbers in descending order.
For example:
Input: {5, 2, 4, 7, 1}
Output: {7, 5, 4, 2, 1}
*/
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_descending(int arr[], int size) {
	int i;
    for (i = 0; i < size - 1; i++) {
    	int j;
        for (j = i + 1; j < size; j++) {
        	
            if (arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main() {
    int arr[5];
    int i;
    printf("Enter 5 numbers: \n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    sort_descending(arr, 5);

    printf("Sorted array in descending order: ");
    for ( i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
