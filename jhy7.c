#include<stdio.h>

int main() {
    int number[] = {2,5,6,1,3,4};
    int length = sizeof(number) / sizeof(number[0]);

    // Swapping the first and last elements
    int temp = number[0];
    number[0] = number[length - 1];
    number[length - 1] = temp;

    // Sorting the array in ascending order using Bubble Sort
    for(int i = 0; i < length - 1; i++) {
        for(int j = 0; j < length - 1 - i; j++) {
            if(number[j] > number[j + 1]) {
                int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array
    printf("Sorted array: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}
