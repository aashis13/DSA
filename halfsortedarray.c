// #include <stdio.h>
// int main()
// {
//     int numbers[] = {6, 8, 9, 14, 1, 10, 11, 15};
//     int n = sizeof(a) / sizeof(a[0]);
//     int temp(size);
//     sort(a);
// }
// void sort(int a[])
// {
//     int size = sizeof(a) / sizeof(a[0]);
//     int end = size;
//     int start = 0;
//     int mid = (start + size) / 2;
//     int j = mid;
//     while (start < mid && j < end)
//     {
//         if (a[start] > a[j])
//         {
//             int temp = a[start];
//         }
#include <stdio.h>
void sort(int numbers[])
{
    int start = 0;
    int end = 8;
    int mid = 4;
    int j = mid;
    int temp[8];
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
            temp[k++] = numbers[j++];
            k++;
            j++;
        }

        while (start < mid)
        {
            temp[k++] = numbers[start++];
        }

        while (j < mid)
        {
            temp[k++] = numbers[j++];
        }
    }
    for (int i = 0; i < 8; i++)
    {
        numbers[i] = temp[i];
    }
}
int main(void)
{
    int numbers[] = {6, 8, 9, 14, 1, 10, 11, 15, 5};
    int size = 8;
    for (int i = 0; i < size; i++)
    {
        printf("%d\t ", numbers[i]);
    }
}