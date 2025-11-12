#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;

// Function to push element on stack
int push(int value)
{

    if (top == MAX - 1)
    {
        printf("Stack is Full.");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d is inserted to stack.\n", value);
    }
}

// Function to pop
void pop()
{
    if (top == -1)
        printf("Stack is empty.\n");
    else
    {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

// Function to peek
int peek()
{
    if (top == -1)
    {
        printf("Stack is empty.");
    }
    else
    {

        printf("%d", stack[top]);
    }
}

// Function to display all stack
int display()
{

    if (top == -1)
    {
        printf("Satck is empty.");
    }
    else
    {
        printf("Stack elements are.\n\n");

        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{

    int choice;
    int value;

    while (1)
    {

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;

        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid Choice.");
        }
    }
}