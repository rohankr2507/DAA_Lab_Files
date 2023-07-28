// Given an array if size n, find the prefix sum of the array
// Prefix sum array --> another array, prefix[] of same size as original array, such that the value of prefix[i] is equal to the orginal array index(0) + index(1) + ... + index(i)

#include <stdio.h>

void printArray(int arr[], int n)
{
    printf("\nThe array elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void prefixSum(int arr[], int n, int prefix[])
{
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
}

void printPrefixSumArray(int prefix[], int n)
{
    printf("\nPrefix Sum Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", prefix[i]);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter elements into array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printArray(arr, n);

    int prefix[n];
    prefixSum(arr, n, prefix);

    printPrefixSumArray(prefix, n);

    return 0;
}
