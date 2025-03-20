#include <stdio.h>
int main()
{
    int n[] = {8, 6, 2, 10, 1, 11};
    int arrlen = sizeof(n) / sizeof(n[0]);
    for (int i = 1; i < arrlen; i++)
    {
        int key = n[i];
        int j = i - 1;
        while (n[j] > key && j >= 0)
        {
            n[j + 1] = n[j];
            j--;
        }
        n[j + 1] = key;
    }
    for (int i = 0; i < arrlen; i++)
    {
        printf("%d ", n[i]);
    }
    return 0;
}