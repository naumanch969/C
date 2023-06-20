#include <stdio.h>

int Increment(int a)
{
    a = a + 1;
}

int Inc(int *p) // having an address of variable rather than creating a new variable
{
    *p = *p + 1; // value of pointer = value of pointer + 1
}

int main()
{

    int a = 10;
    int b = 10;

    Increment(a);
    Inc(&b); // call by reference

    printf("incremented value of a = %d \n", a); // it will not work
    printf("incremented value of b = %d \n", b); // it will work correctly

    return 0;
}

// during execution of program, allocated memory of program is basicallly divided into following sections
// 1) code (text)
// 2) static/global
// 3) stack
// 4) heap