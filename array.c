#include <stdio.h>

int main (){

    int rows = 3;
    int cols = 2;
    int array[3][2] = {
        {1,2},
        {3,4},
        {9,6},
    };

    int i,j;

    for(i=0; i < rows; i++){

        for(j=0; j < cols; j++){
            printf("%d,",array[i][j]);
        }
        printf("\n");

    }

    return 0;
}