#include<stdio.h>
#include<string.h>

//strings in C 
//final character is the null character, \0

int main(){
    char string[] = "Just how long am I?";
    int len;

    len = strlen(string);
    printf("The following string: \n");
    puts(string);
    printf("is %d characters long.\n",len);

    return 0;
}