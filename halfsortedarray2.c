#include <stdio.h>
void sort(int numbers[], int start, int mid, int end)
{
    int s = start;
    int size = size - mid;
    int j = mid;
    int temp[end - start];
    int k = 0;
    while (start < mid && j < end)
    {
        if (numbers[start] < numbers[j])
        {
            temp[k++] = numbers[start++];
            k++;
            start++;
        }
        else
        {
            temp[k] = numbers[j];
            k++;
            j++;
        }

        while (start < mid)
        {
            temp[k] = numbers[start];
            k++;
            start++;
        }

        while (j < mid)
        {
            temp[k] = numbers[j];
            k++;
            j++;
        }
    }
    for (int i = 0; i < size; i++, s++)
    {
        numbers[i] = temp[i];
    }
}
int main(void)
{
    int numbers[] = {2, 4, 5, 6, 1, 8};
    int size = 8;
    for (int i = 0; i < size; i++)
    {
        printf("%d\t ", numbers[i]);
    }

    sort(numbers, 0, 4, 6);

    printf("\nAfter sorting:  ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", numbers[i]);
    }
    return 0;
}