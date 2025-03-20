// wap to implement singly linked list operations: add, addtolast add afterXposition and delete.
#include <stdio.h>
#include <stdlib.h>

typedef struct Nodes
{
    struct Nodes *next;
    int data;
} Node;

Node *head = NULL;

void insertAtBegining(int data)
{
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = head;
    head = node;
}

void insertAtlast(int data)
{
    Node *newnode = malloc(sizeof(Node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node *next = head;
        while (next->next != NULL)
        {
            next = next->next;
        }
        next->next = newnode;
    }
}

void insertAfternode(int position, int data)
{
    Node *newnode = malloc(sizeof(Node));
    newnode->data = data;
    Node *temp = head;
    while (position-- && temp != NULL)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Position not found\n");
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void deleteatBegining()
{
    if (head == NULL)
    {
        printf("List is delete\n");
        return;
    }
    Node *temp = head;
    head = head->next;
    free(temp);
}

void deleteatEnd()
{ 
    if (head == NULL)
    {
        printf("List is deleted\n");
        return;
    }
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void deletespecificNode(int position)
{
    if (head == NULL)
    {
        printf("List is deleted\n");
        return;
    }
    Node *temp = head;
    if (position == 0)
    {
        head = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        printf("Position not found\n");
        return;
    }
    Node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

void printlist()
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    insertAtBegining(1);
    insertAtlast(2);
    insertAfternode(1, 10);
    printlist();
    deleteatBegining();
    printlist();
    deleteatEnd();
    printlist();
    return 0;
}