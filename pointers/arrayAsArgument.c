#include <stdio.h>

int subOfElement(int A[], int size) // int A[] = int *A; compiler consider array arument like tis
{
    // sizeof(A);  // it will be 4 byte, sizeof first element of array
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += A[i]; // A[i] is *(A+i)
    }
    return sum;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = sumOfElement(A, size);
    printf("sum of elements %d\n", total);

    return 0;
}