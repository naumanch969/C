#include<stdio.h>

int main(){
 int age;

 printf("Enter your age \n");
 scanf("%d",&age);

 printf("you have entered %d as your age\n",age);

if(age>=18){
    printf("you are eligible");
}
else if(age>=10){
    printf("you are between 10 to 18");
}
else if(age>=3){
    printf("you are between 3 to 10");
}
else{
    printf("you are under 3");
}

}