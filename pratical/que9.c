#include <stdio.h>
#define SIZE 100
int queue[SIZE];
int queueSize = 0;

void insert(int data)
{
    if (queueSize == SIZE)
    {
        printf("Heap is full\n");
        return;
    }
    else
    {
        queueSize++;
        int i = queueSize - 1;
        queue[i] = data;
        while (i != 0 && queue[i] > queue[(i - 1) / 2])
        {
            int temp = queue[i];
            queue[i] = queue[(i - 1) / 2];
            queue[(i - 1) / 2] = temp;
            i = (i - 1) / 2;
        }
    }
}

int dequeue()
{
    if (queueSize == 0)
    {
        printf("Heap is empty\n");
        return -1;
    }

    int returningElement = queue[0];
    int x = queue[queueSize - 1];
    queueSize--;
    queue[0] = x;
    int i = 0;
    int j = 2 * i + 1;
    while (j < queueSize - 1)
    {
        if (queue[j] < queue[j + 1])
        {
            j = j + 1;
        }
        if (queue[i] > queue[j])
            break;
        int temp = queue[j];
        queue[j] = queue[i];
        queue[i] = temp;
        i = j;
        j = 2 * i + 1;
    }
    return returningElement;
}

void print()
{
    for (int i = 0; i < queueSize; i++)
    {
        printf("%d\n", queue[i]);
    }
}

int main()
{
    insert(1);
    insert(40);
    insert(45);
    insert(50);
    insert(5);
    insert(6);
    print();

    printf("%d\n", dequeue());
    print();

    return 0;
}
