// C Program to concateante two strings and display the resultant string without built-in string functions (using pointers)

#include <stdio.h>
#include <string.h>

void main()
{
    char str1[20]; // Holds the first string
    char str2[20]; // Holds the second string
    char str3[20]; // Holds the concatenated string

    char *ptr1 = str1; // Holds base address of first string
    char *ptr2 = str2; // Holds base address of second string
    char *ptr3 = str3; // Holds base address of resultant string

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    // Copy the first string to destination string excluding the NUll string
    while (*ptr1)
        *ptr3++ = *ptr1++;

    // Copy the second string to destination string excluding the NULL string
    while (*ptr2)
        *ptr3++ = *ptr2++;

    // Add NULL character at the end to the destination string
    *ptr3 = '\0';
    printf("The resultant string: %s", str3);
}
