#include <stdio.h>
#define max 10;
int Stack[max];
int peek = -1;

void push(int value){
  if (peek == max - 1){
    printf("Stack already filled!\n");
  }
  else {
    Stack[peek + 1] = value;
    peek++;
  }
}

int pop(){
  if (peek == -1){
    printf("Stack is empty!\n");
    return;
  }
  else{
    int value = Stack[peek];
    peek--;
    return value;
  }
}

int main(){
  push(1);
  push(2);
  push(3);
  printf("You got %d from the top of stack", pop());
  printf("You got %d from the second of the stack", pop());
  printf("You got %d from the third of the stack", pop());
  return 0;
}
