#include <stdio.h>

int main()
{
    int A[5] = {1, 2, 64, 343, 2};
    int *p;
    p = A;
    // A++; // invalid
    // p++; // valid - increment in address of pointer

    printf("%d\n", A);
    printf("%d\n", &A[0]);

    // A = &A[0]
    // A   is the address of first  element of array
    // A+1 is the address of second element of array
    // A+2 is the address of third  element of array
    // A+3 is the address of fourth element of array and so on
    printf("sizeof(A) = %d", sizeof(A));
    for (int i = 0; i < 5; i++)
    {
        printf("address of A[%d] = %d \n", i, A + i);
        printf("value of A[%d] = %d \n", i, *(A + i));
        printf("address of A[%d] = %d \n", i, &A[i]);
        printf("value of A[%d] = %d \n", i, A[i]);
    }

    return 0;
}