// Program to find the length of the string without using strlen()

#include <stdio.h>
#include <string.h>

void main()
{
    char str[20];    // Gives string
    int i = 0;       // Holds the length, intially 0
    char *ptr = str; // Holds the copy of base address

    printf("Enter the string: ");
    gets(str);

    // Find the length of the string
    while (*ptr++)
        i++;
    printf("Length of string is %d\n", i);
}