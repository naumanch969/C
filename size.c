#include <stdio.h>

int main()
{
    printf("%d \n", sizeof(char));          //1  bytes
    printf("%d \n", sizeof(int));           //4  bytes   
    printf("%d \n", sizeof(float));         //4  bytes
    printf("%d \n", sizeof(long));          //4  bytes
    printf("%d \n", sizeof(double));        //8  bytes
    printf("%d \n", sizeof(long double));   //12 bytes
    return 0;
}