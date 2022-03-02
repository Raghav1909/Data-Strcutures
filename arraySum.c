// Write a recursive program to find the sum of array elements from a[n-1] to a[0]
#include <stdio.h>

int arrSum(int arr[], int N)
{
    if (N <= 0)
        return 0;
    return arrSum(arr, N - 1) + arr[N - 1];
}

void main()
{
    int n, i, arr[100];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The sum of array elements is %d", arrSum(arr, n));
}