#include <stdio.h>

int main()
{

    int x = 1;
    int *p = &x;   // pointer to integer
    int **q = &p;  // pointer to pointer
    int ***r = &q; // pointer to pointer to ponter

    // *p --> x             // pointer to integer (x)
    // **q --> x            // pointer to pointer (p) which points integer (x)
    // ***r --> x           // pointer to pointer (q) to ponter (p) which points integer (x)

    *p = 12;              // x = 12
    **q = *p + 1;         // x = x + 1
    ***r = *p + **q + 10; // x = x + x + 10

    printf("value of x = %d \n", x);
    printf("address of p = %p \n", p);
    printf("value of p = %d \n", *p);
    printf("address of q = %p \n", q);
    printf("value of q = %d \n", **q);
    printf("address of r = %p \n", r);
    printf("value of r = %d \n", ***r);

    return 0;
}