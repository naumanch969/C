#include<stdio.h>

int main()
{
    int age; 
    for(int i=0; i<10; )
    {
        printf("enter your age: \n");
        scanf("%d",&age);
        if(age==0){
            break;
        }
        if(age>50){    // go to next iteration
            continue;
        }
        printf("this is working \n");    //   if age>50 then this will not execute
    }
}
