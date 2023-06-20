// pointers are simply a data type used to store the memory addresses
#include<stdio.h>

int main (){

    int integer = 5;
    int *pInteger = &integer;
    double floatingNumber = 2.534;
    double *pFloatingNumber = &floatingNumber;
    char character = 'a';
    char *pCharacter = &character;

    // printf("address=%p and value=%d \n", pInteger, *pInteger);
    // printf("address=%p and value=%f \n", pFloatingNumber, *pFloatingNumber);
    // printf("address=%p and value=%c \n", pCharacter, *pCharacter);

    // printf("addres of variable 'integer' %p\n", &integer);

    
    int var = 5;
    int *pVar = &var;

    printf("pVar %p\n", pVar);     // by pointer
    printf("&pVar %p\n", &var);     // directly by using &
    printf("*&pVar %d\n", *&pVar);   // * is used for dereferencing value of pointer 
    printf("*&*&*&pVar %d\n", *&*&*&pVar);   // & is used to get address, * is used to get value at that address

    return 0;
}