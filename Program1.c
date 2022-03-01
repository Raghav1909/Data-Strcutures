// Write a C program to construct a stack and to perform the following operations:
// i) Push ii) Pop iii) Display
// The program should print appropriate message for stack overflow, stack underflow & stack empty

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 5

// Function to PUSH an element into Stack
void push(int item, int *top, int S[])
{
    if (*top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    (*top)++;
    S[*top] = item;
    printf("\n%d is successfully inserted\n", item);
}

// Function to POP an element from the Stack
void pop(int *top, int S[])
{
    int ele;
    if (*top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("\n%d element is deleted\n", S[*top]);
    (*top)--;
}

// Function to display the element of the Stack
void display(int top, int S[])
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack contains: \n");
    for (i = 0; i <= top; i++)
        printf("%d\n", S[i]);
}

void main()
{
    int item, top = -1, S[MAX], choice;
    for (;;)
    {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter an item: ");
            scanf("%d", &item);
            push(item, &top, S);
            break;

        case 2:
            pop(&top, S);
            break;

        case 3:
            display(top, S);
            break;

        default:
            printf("\nInvalid choice\n");
            exit(0);
        }
    }
}