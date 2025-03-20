// wap to find the order of element using binary search.
#include <stdio.h>
int binarysearch(int array[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] == target)
        {
            return mid;
        }
        if (array[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 1;
}
int main()
{
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(array) / sizeof(array[0]);
    int target = 70;
    int result = binarysearch(array, 0, 9, target);
    if (result != 1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found in the array \n");
    }
    return 0;
}