#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

void insertIntoBegining(int data)
{
    struct Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = head;
    head = node;
}

void insertIntoLast(int data)
{
    struct Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;

    if (head == NULL)
    {
        head = node;
        return;
    }

    Node *next = head;
    while (next->next != NULL)
    {
        next = next->next;
    }
    next->next = node;
}

void printList()
{
    Node *next = head;
    while (next != NULL)
    {
        printf("%d \t", *next);
        next = next->next;
    }
    printf("\n");
}

int main(void)
{
    printList();

    insertIntoBegining(10);
    printList();
    insertIntoBegining(6);
    printList();
    insertIntoBegining(3);
    printList();
    insertIntoLast(20);
    printList();
    insertIntoLast(30);
    printList();
    insertIntoLast(40);
    printList();
}