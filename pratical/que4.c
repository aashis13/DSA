// wap to implement Bubble sort an array.
#include <stdio.h>
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int array[] = {8, 10, 2, 6, 9, 3, 5, 7, 0};
    int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
    printf("\n");
    printf("The sorted array is \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}