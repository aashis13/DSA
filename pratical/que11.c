// wap to implement insertation sort to sort an array.
#include <stdio.h>
#include <time.h>
int main()
{
    time_t start, end;
    start = time(NULL);
    int array[] = {10, 8, 2, 9, 4, 3, 1, 5};
    int n = sizeof(array) / sizeof(array[0]);
    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (array[j] > key && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    end = time(NULL);
    printf("The sorted array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}