// wap to find the index of the element by using sequential search.
#include <stdio.h>
int sequentialSearch(int array[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int array[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(array) / sizeof(array[0]);
    int target = 50;
    int result = sequentialSearch(array, n, target);
    if (result == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at index %d\n", result);
    }
    return 0;
}