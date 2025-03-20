#include<stdio.h>
#define MAX 10
int stack[MAX], top = -1;
void push(int data)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        stack[++top] = data;
    }
}
int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}  
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    printf("Popped Element: %d\n", pop());
    printf("Popped Element: %d\n", pop());
    display();
    return 0;
}