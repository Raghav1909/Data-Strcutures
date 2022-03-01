// Write a C program to evaluate a valid prefix expression. Assume that the prefix expression
// has single digit operands and binary arithmetic operations.

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50
int S[MAX], top = -1;

/* Function to PUSH an element */
void push(int item)
{
    S[++top] = item;
}

/* Function to POP an element */
int pop()
{
    int ele;
    ele = S[top--];
    return ele;
}

void main()
{
    char prfx[50], ch;
    int i = 0, a, b;
    printf("enter a prefix expression\n");
    scanf("%s", prfx);
    strrev(prfx);
    printf("\n%s", prfx);
    while ((ch = prfx[i++]) != '\0')
    {
        if (isdigit(ch))
            push(ch - '0');
        else
        {
            a = pop();
            b = pop();
            switch (ch)
            {
            case '+':
                push(a + b);
                break;
            case '-':
                push(a - b);
                break;
            case '*':
                push(a * b);
                break;
            case '/':
                push(a / b);
                break;
            case '^':
                push(pow(a, b));
                break;
            }
        }
    }
    printf("\nResult is: %d", S[top]);
}