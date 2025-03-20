#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = 0;
int rear = -1;

int isFull()
{
    return rear == SIZE - 1;
}

int isEmpty()
{
    return front > rear;
}

void enqueue(int element)
{
    if (isFull())
    {
        printf("Queue is full\n");
    }
    else
    {
        queue[++rear] = element;
    }
}

int dequeue()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        return queue[front++];
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    printf("Dequeued element: %d\n", dequeue());
    display();
    return 0;
}