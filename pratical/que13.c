#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

Node *head = NULL;

void InsertBeginning(int data)
{
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = head;
    node->prev = NULL;
    if (head != NULL)
    {
        head->prev = node;
    }
    head = node;
}

void addInLast(int data)
{
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if (head == NULL)
    {
        node->prev = NULL;
        head = node;
        return;
    }
    Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = node;
    node->prev = ptr;
}
void insertAfterNode(int position, int data)
{
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    Node *temp = head;
    while (position-- && temp != NULL)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf(" Position not available ");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}
void deleteSpecificNode(int position)
{
    if (head == NULL)
    {
        printf("Empty list\n");
        return;
    }
    Node *temp = head;
    if (position == 0)
    {
        head = temp->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < position; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Position does not exist\n");
        return;
    }
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    free(temp);
}

void printList()
{
    Node *next = head;
    while (next != NULL)
    {
        printf(" %d", next->data);
        next = next->next;
    }
    printf("\n");
}

int main()
{
    InsertBeginning(20);
    printList();
    addInLast(12);
    printList();
    addInLast(55);
    printList();
    insertAfterNode(0, 15);
    printList();
    deleteSpecificNode(0);
    printList();
    return 0;
}
