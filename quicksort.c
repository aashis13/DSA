#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int numbers[], int low, int high) // 6 8  1 4 3 2
{
    int pivot = numbers[high];
    int j = low - 1;

    for (int k = low; k < high; k++)
    {
        if (numbers[k] <= pivot)
        {
            j++;
            swap(&numbers[j], &numbers[k]);
        }
    }
    swap(&numbers[j + 1], &numbers[high]);
    return j + 1;
}

void quicksort(int num[], int low, int high)
{
    if (low < high)
    {
        int pivotindex = partition(num, low, high);
        quicksort(num, low, pivotindex - 1);
        quicksort(num, pivotindex + 1, high);
    }
}