// Write a C program to convert prefix expression to infix expression

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 20

char stack[max];
char temp;
int top = -1;

int prcd(char symb)
{
    switch (symb)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '%':
    case '/':
        return 3;
    case '^':
    case '$':
        return 6;
    case '#':
        return -1;

    case ')':
        return 0;

    default:
        return 8;
    }
}

int isop(char symb)
{
    switch (symb)
    {
    case '+':
    case '-':
        return 2;

    case '*':
    case '%':
    case '/':
        return 4;
    case '$':
    case '^':
        return 5;
    case '(':
        return 0;
    case ')':
        return 9;
    default:
        return 7;
    }
}

void infix_prefix(char inf[], char prf[])
{
    int i, j = 0;
    char symb;
    stack[++top] = '#';
    for (i = strlen(inf) - 1; i >= 0; i--)
    {
        symb = inf[i];
        while (prcd(stack[top]) > isop(symb))
        {
            prf[j++] = stack[top--];
        }
        if (prcd(stack[top]) != isop(symb))
            stack[++top] = symb;
        else
            top--;
    }

    while (stack[top] != '#')
    {
        prf[j] = stack[top];
        j++;
        top--;
    }

    prf[j] = '\0';
    printf("Expression in Prefix Format: ");
    for (i = strlen(prf) - 1; i >= 0; i--)
        printf("%c", prf[i]);
}
void main()
{
    char inf[30], prf[30];
    printf("Enter an Expression in Infix format:\n");
    scanf("%s", inf);
    infix_prefix(inf, prf);
}
