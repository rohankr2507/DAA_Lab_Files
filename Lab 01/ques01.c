// WAP to find out second smallest and second largest elements strode in an array of n intergers. The array input should be given at runtime.

#include <stdio.h>

void printArray(int arr[], int n)
{
    printf("\nThe array elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swapNum(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swapNum(&arr[i], &arr[j]);
            }
        }
    }
}

void secondLargeSmall(int arr[], int n)
{
    printf("\nThe second largest element of array : %d", arr[n - 2]);
    printf("\nThe second smallest element of array : %d", arr[1]);
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

    sortArray(arr, n);

    printArray(arr, n);

    secondLargeSmall(arr, n);

    return 0;
}
