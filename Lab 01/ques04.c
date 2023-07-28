// Write a function named rotateRight(p1, p2), create a functiom exchange(a,b) that swaps a & b
// The rotateRight function will use the exchange function to shift right p2 elements starting from index p1 by one position

// A = [11,22,33,44,55,66,77,88,99]
// upon this array call rotateRight(p1,p2) function
// p1 --> starting index
// p2 --> no of elements to be shifted right
// rotateRight(1,5)
// A = [11,77,22,33,44,55,66,88,99]

#include <stdio.h>

void printArray(int arr[], int n)
{
    printf("\nThe array elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void exchange(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void rotateRight(int arr[], int p1, int p2, int n)
{
    for (int i = p2; i >= p1; i--)
    {
        exchange(&arr[i + 1], &arr[i]);
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

    int p1, p2;
    printf("\nEnter the values of p1 & p2 : ");
    scanf("%d %d", &p1, &p2);

    rotateRight(arr, p1, p2, n);
    printf("\nAfter calling the rotateRight() function --> ");
    printArray(arr, n);
    return 0;
}
