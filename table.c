#include<stdio.h>

int main ()
{

    int num;

    printf("Enter the number a \n");
    scanf("%d",&num); 

    printf("Multipliacation table of %d is as follow: \n",num);

    printf("%d X 1 = %d \n" ,num, num * 1);
    printf("%d X 2 = %d \n" ,num, num * 2);
    printf("%d X 3 = %d \n" ,num, num * 3);
    printf("%d X 4 = %d \n" ,num, num * 4);
    printf("%d X 5 = %d \n" ,num, num * 5);
    printf("%d X 6 = %d \n" ,num, num * 6);
    printf("%d X 7 = %d \n" ,num, num * 7);
    printf("%d X 8 = %d \n" ,num, num * 8);
    printf("%d X 9 = %d \n" ,num, num * 9);
    printf("%d X 10 = %d \n" ,num, num * 10);
    

    // by loop
    for( int i=1; i<11; i++ ){
        printf("%d X %d = %d \n",num, i, num * i);
    }

    return 0;
}