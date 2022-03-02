// Write a recursive program to print array elements
#include <stdio.h>

int printArray(int arr[], int i, int n)
{
    if (i == n)
        return 0;
    printf("%d ", arr[i]);
    return printArray(arr, ++i, n);
}

void main()
{
    int n, i, arr[100];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The array elements are: ");
    printArray(arr, 0, n);
}