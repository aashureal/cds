#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

int insert(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

int printList()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    printList();
    return 0;
}