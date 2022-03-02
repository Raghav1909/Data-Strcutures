// Write a recursive program to find the maximum element in an array
#include <stdio.h>

int maxEle(int arr[], int n, int max)
{
    if (n <= 0)
        return max;
    if (arr[n - 1] > max)
        max = arr[n - 1];
    return maxEle(arr, n - 1, max);
}

void main()
{
    int i, n, max, arr[100];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = arr[n - 1];
    printf("Maximum element in this array is %d", maxEle(arr, n, max));
}