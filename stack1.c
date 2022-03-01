// Write a program to implement stack operations without passing parameters

#include <stdio.h>
#include <stdlib.h>

int s[10], i, n, ch, top = -1, item, item_del;

void push()
{
    if (top == n - 1)
    {
        printf("Stack overflow \n");
        return;
    }

    printf("Enter the items to be inserted: ");
    scanf("%d", &item);
    s[++top] = item;
}

void pop()
{
    if (top == -1)
    {
        printf("Stack underflow \n");
        return;
    }

    item_del = s[top--];
    printf("Item deleted = %d \n", item_del);
}

void display()
{
    if (top == -1)
    {
        printf("Empty Stack \n");
        return;
    }

    printf("Contents of stack: ");
    for (i = 0; i <= top; i++)
        printf("%d ", s[i]);
    printf("\n");
}

void main()
{
    printf("Enter the size of stack: ");
    scanf("%d", &n);
    for (;;)
    {
        printf("Enter the choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            exit(0);
            break;
        }
    }
}