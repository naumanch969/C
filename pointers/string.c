#include <stdio.h>
#include <string.h>

void print(char *C) // C[] = *C[0]
{
    int i = 0;
    printf("%d", C);
    while (*C != '\0')  // C[i] = *(C+i)     // value stored in address C
    {
        printf("%c", *C);
        C++;            // increment in address of variable
    }
    printf("\n");
}

int main()
{
    char C1[12] = "Nauman";
    char *C2;
    C2 = C1; // address of first element of C1 is stored in C2
    C2[2] = 'j';
    print(C1);
    

    char *C3 = "Nauman";    // it would be considered as constant
    // C3[3] = "d";         // invalid

    return 0;
}