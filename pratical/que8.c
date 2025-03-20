// wap to implement merge sort to sort an array.
#include <stdio.h>
void mergesort(int array[], int start, int mid, int end)
{
    int s = start;
    int size = end - start;
    int k = 0;
    int j = mid;
    int temp[size];
    while (start < mid && j < end)
    {
        if (array[start] < array[j])
        {
            temp[k] = array[start];
            k++;
            start++;
        }
        else
        {
            temp[k] = array[j];
            k++;
            j++;
        }
    }
    while (start < mid)
    {
        temp[k] = array[start];
        k++;
        start++;
    }
    while (j < end)
    {
        temp[k] = array[j];
        k++;
        j++;
    }
    for (int i = 0; i < size;)
    {
        array[s] = temp[i];
        i++;
        s++;
    }
}
void merge(int array[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge(array, start, mid);
        merge(array, mid + 1, end);
        mergesort(array, start, mid, end);
    }
}
int main()
{
    int array[] = {2, 4, 6, 1, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    mergesort(array, 0, 3, 6);
    printf("The sorted array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}