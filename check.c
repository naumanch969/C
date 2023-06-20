#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    char input2[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    if (input[strlen(input)-1] == '\n') {
        input[strlen(input)-1] = '\0';
    }
    printf("You entered: %s\n", input);

    printf("Enter a string; %s\n");
    scanf("%s", input2);
    printf("You entered: %s\n", input1);
    
    return 0;
}