// Write a program to implement stack operations by passing parameters
// (i) Stack of Strings

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i, n, ch, top = -1;
char s[10][10], item[10], item_del[10];

void push()
{
    if (top == n - 1)
    {
        printf("Stack overflow \n");
        return;
    }

    printf("Enter the items to be inserted: ");
    scanf("%c", &item);
    strcpy(item, &s[++top]);
}

void pop()
{
    if (top == -1)
    {
        printf("Stack underflow \n");
        return;
    }

    strcpy(s[top--], &item_del);
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