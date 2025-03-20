#include <stdio.h>

void sort(int numbers[], int start, int mid, int end)
{
    int s = start;
    int size = end - start;
    int j = mid;
    int temp[end - start];
    int k = 0;
    while (start < mid && j < end)
    {
        if (numbers[start] < numbers[j])
        {
            temp[k++] = numbers[start++];
        }
        else
        {
            temp[k++] = numbers[j++];
        }
    }

    while (start < mid)
    {
        temp[k++] = numbers[start++];
    }

    while (j < end)
    {
        temp[k++] = numbers[j++];
    }

    for (int i = 0; i < size; i++, s++)
    {
        numbers[s] = temp[i];
    }
}

void mergeSort(int numbers[], int start, int end)
{
    if (start < end - 1)
    {
        int mid = (start + end) / 2;
        mergeSort(numbers, start, mid);
        mergeSort(numbers, mid, end);
        sort(numbers, start, mid, end);
    }
}

int main(void)
{
    int numbers[] = {2, 4, 5, 6, 1, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Before sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", numbers[i]);
    }

    mergeSort(numbers, 0, size);

    printf("\nAfter sorting:  ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", numbers[i]);
    }
    return 0;
}