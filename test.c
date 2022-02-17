// This is test file for running dummy programs

#include <stdio.h>
#include <string.h>

void main()
{
    char name[20] = "Pranav";
    char *ptr = name;
    while (*ptr++)
        printf("%c", *ptr);
}