#include <stdio.h>



// three spaces separating the input

void readInput(){
    FILE *fptr;
    char ch;
    fptr = fopen("day1.txt", "r");
    if (NULL == fptr){
        printf("cant open \n");
    }
    printf("contents of file is: \n");

    do {
        ch = fgetc(fptr);
        // check to see if the character u s
        printf("%c", ch);
    } while (ch!= EOF);
    fclose(fptr);
}


int main(int n, char *args[]) {

    // get the input
    readInput();
    return 0;
}
