#include <stdio.h>
#include <math.h>

int factorial(int number){
    if(number==0||number==1){
        return 1;
    }
    else{
        return (number * factorial(number-1));
    }
}

int main()
{
    int num;

    printf("this is aowmthi");
    printf("enter the number for factorial:\n");
    scanf("%d",&num);
    printf("factorial of %d is %d",num, factorial(num));

    // pow(2,3);
    // sqrt(36);
    // printf('%d',2 )
    // ceil(35.3435);
    // floor(25.44);
    // add(2,4,42,3);
    // ....
    
}
