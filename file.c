#include <stdio.h>

int main() {
    char line[255];
    FILE *fPointer;
    fPointer = fopen("employees.txt", "w");
    // write "w" is used to open a file and override the content when added through fprintf;
    // appent "a" is used to append/insert some more content to the end of file;
    // read "r" is used to open the file in read-only mode
    // file may be of any type .html, .css, .js, .c, .cpp, .ts etc.

    fprintf(fPointer, "ali, artist\n aslam, programmer\n hamza, entusiastic\n");
    // fprintf is used to print out the information to given file

    fgets(line, 255, fPointer); // array to store the content, size of array, pointer of the file
    printf("%s", line);

    fclose(fPointer);

    return 0;
}
