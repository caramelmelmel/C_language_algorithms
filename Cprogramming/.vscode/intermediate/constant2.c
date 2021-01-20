#include<stdio.h>

//good input statement here to specify the definition of the constant 
//state the buffer size 

#define INPUT_MAX 16 

int main(){
    char input[INPUT_MAX];
    printf("Instructions: ");
    fgets(input,INPUT_MAX,stdin);
    puts("Thank you! Here are your instructions!: ");
    puts(input);
    return 0;
}
