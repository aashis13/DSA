// Wap to implement stack operations(push,pop,peek) using array.
#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1; 
void push(int x) {
    if (top >= MAX-1) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = x;
        printf("%d pushed into stack\n", x);
    }
}

int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return 0;
    } else {
        int x = stack[top--];
        return x;
    }
}

int peek() {
    if (top < 0) {
        printf("Stack is empty\n");
        return 0;
    } else {
        int x = stack[top];
        return x;
    }
}

int isEmpty() {
    if(top < 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int isFull() {
    if(top >= MAX-1) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    push(1);
    push(2);
    push(3);
    printf("%d popped from stack\n", pop());
    printf("Top item is %d\n", peek());

    push(4);
    printf("Is the stack full? %d\n", isFull()); // prints 1 after all slots are filled

    return 0;
}
