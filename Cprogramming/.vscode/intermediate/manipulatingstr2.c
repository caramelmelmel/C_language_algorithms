#include <stdio.h>
#include <string.h>

int main(){
    char input[64]; /* 63 characters plus null */
    int len;

    printf("Instructions: ");
    fgets(input,64,stdin); //fetch inp to store in the input buffer, 64 is to match the input buffer size, input source stdin is in the stdio header file
    len = strlen(input); //strlen doesnt count the null char at the end of the string 
    printf("You typed %d characters of instructions.\n",len);
    return 0;
}