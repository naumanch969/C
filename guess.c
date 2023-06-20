#include <stdio.h>
#include <conio.h>

int main (){

    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int outOfGuess = 0;

    while(secretNumber!=5 && outOfGuess == 0 ){
        if(guessCount < outOfGuess){
            printf("Enter a number");
            scanf("%d", guess);
            guessCount++;
        }
        else {
            outOfGuess = 1;
        }
    }

    if(outOfGuess == 1 ) printf("out of guess");    
    else printf("You won!");    

    return 0;
}