#include<stdio.h>

int main()
{
    int times, index=0;
    printf("enter the number of times you want to print hello world\n");
    scanf("%d",&times);

    // do
    // {
    //     printf("%d \n",index);
    //     index = index +1;

    // }while(index<times);

    // while(index<times){
    //     printf("%d \n",index);
    //     index=index+1;
    // }

    for(; index<times; index++){   // ; at first mean there is no expression 1
        printf("%d \n",index);
    }

    // for(int i=0; i<times; i++){
    //     printf("%d \n",i);
    // }

    for(int i=0; i<times;){ // infinite loop
        printf("%d \n",i);
    }

    return 0;

}
