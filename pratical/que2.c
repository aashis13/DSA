// wap to implement queue operations (enqueue, dequeue, peek, using an array)
#include <stdio.h>

#define SIZE 100

int queue[SIZE];
int front = 0;
int rear = -1;

void enqueue(int item)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        queue[++rear] = item;
    }
}

int dequeue()
{
    if (front > rear)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        int item = queue[front++];
        return item;
    }
}

int isEmpty()
{
    return front > rear;
}

int peek()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        return queue[front];
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);

    printf("Front of the queue: %d\n", peek());

    while (!isEmpty())
    {
        printf("Dequeued: %d\n", dequeue());
    }

    return 0;
}