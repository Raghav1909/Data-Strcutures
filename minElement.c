// Write a recursive program to find the mimimum element in an array
#include <stdio.h>

int minEle(int arr[], int n, int min)
{
    if (n <= 0)
        return min;
    if (arr[n - 1] < min)
        min = arr[n - 1];
    return minEle(arr, n - 1, min);
}

void main()
{
    int i, n, min, arr[100];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    min = arr[n - 1];
    printf("Minimum element in this array is %d", minEle(arr, n, min));
}