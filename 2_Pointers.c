// Program to copy the string from source to destination without using the function strcpy()

#include <stdio.h>
#include <string.h>

void main()
{
    char str1[20]; // Holds the source string
    char str2[20]; // Holds the destination

    char *ptr1 = str1; // Holds the base address of source string
    char *ptr2 = str2; // Holds the base address of destination string

    printf("Enter the string: ");
    gets(str1);

    while (*ptr1 != '\0')  // If not NULL character
        *ptr2++ = *ptr1++; // Copy from source to destination
    *ptr2 = '\0';          // Attach NULL character at the end of the string

    printf("Source string: %s ", str1);
    printf("\nDestination string: %s ", str2);
}