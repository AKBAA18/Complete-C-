#include <stdio.h>

int main() {
    int i = 5;

    while (i) {
        fprintf(stderr, "%d" " - %-8s", i,"AKSHAY" ); //%d is for the integer %-8s specify 8 strings 
        fputc('a', stderr);// putc is used to print a character is int entered take its ascii value 
        fputs(" Baalaji", stderr);//To print a string in C, we use fputs() function.
        printf("\n");
        i--;
    }

    return 0;
}
