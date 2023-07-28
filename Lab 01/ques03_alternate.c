// WAP to read n integers from a disc file that must contain some duplicate values & store them into an array
// Perform the following operations on the array
// (a) Find out the total no of duplicate elements
// (b) Find out the most repeating element in the array

#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int n)
{
    printf("\nThe array elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void printHashArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n%d --> %d", i, arr[i]);
    }
}

int maxElement(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}

void operationReq(int hash[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (hash[i] > 1)
            count++;
    }
    printf("\nTotal no of duplicate elements : %d", count);

    int temp = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (hash[i] > temp)
        {
            temp = hash[i];
            index = i;
        }
    }
    printf("\nMost repeating element : %d --> %d", index, hash[index]);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    FILE *ptr;
    ptr = fopen("numberFileques03.txt", "r");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(ptr, "%d", &arr[i]);
    }

    printArray(arr, n);

    int m = maxElement(arr, n);
    int size = (m + 1);
    int hash[size];
    for (int i = 0; i < size; i++)
    {
        hash[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    printHashArray(hash, size);

    operationReq(hash, size);

    return 0;
}