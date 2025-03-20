#include <stdio.h>
#define size 5
int queue[size];
int front = 0;
int rare = 0;
int enqueue(int element)
{
    if (front == size)
    {
        if ((front + 1) % size == rare)
        {
            printf("Queue is full");
            return 0;
        }
        else
        {
            front = (front + 1) % size;
        }
    }
    queue[front++] = element;
    return 0;
}
int dequeue()
{
    if (rare == size)
    {
        if ((rare + 1) % size == front + 1)
        {
            printf("The queue is empty");
            return 0;
        }
        else
        {
            rare = (rare + 1) % size;
        }
    }
    int element = queue[rare++];
    return element;
}
int main()
{
    enqueue(1);
    enqueue(50);
    int b = dequeue();
    printf("%d", b);
    b = dequeue();
    printf(" %d", b);
    return 0;
}