// C Program to reverse a string

#include <stdio.h>
#include <string.h>

void main()
{
    char str[20]; // Given String
    char rev[20]; // Reverse String

    char *i = str; // To access the given string
    char *j = rev; // To access the reversed string

    printf("Enter the string: ");
    scanf("%s", str);

    while (*i = '\0') // Move till \0 is reached
        i++;
    i--; // Move to the last character of string string

    // Copy character from source to destination
    // Update the ith pointer towards left
    // and jth pointer towards right

    while (i >= &str[0])
        *j++ = *i--;
    *j = '\0';

    printf("The reversed string: %c", ;
}