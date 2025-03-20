// wap to find the sorting of array using selection sort.
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
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                swap(&array[i], &array[j]);
            }
        }
    }
    printf("\n");
    printf("The sorted array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}