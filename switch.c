#include<stdio.h>

int main()
{
    int age;
    int marks;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("enter your marks\n");
    scanf("%d",&marks);

    printf("you have entered %d as your age\n",age);

    switch(age){     // if we don't add break then condition after matched condition will automatically execute
        case 3:
            printf("your age is 3\n");
                switch(marks){
                    case 20: printf("your marks are 20\n"); break;
                    case 30: printf("your marks are 30\n"); break;
                    case 40: printf("your marks are 40\n"); break;
                    case 50: printf("your marks are 50\n"); break;
                    default: printf("your marks are not 20 or 30 or 40 or 50\n");
                }
            break;
        case 23:
            printf("your age is 23\n");
            break;
        case 43:
            printf("your age is 43\n");
            break;
        default:
            printf("age is not 3 or 23 or 43\n");
    }



    return 0;
}