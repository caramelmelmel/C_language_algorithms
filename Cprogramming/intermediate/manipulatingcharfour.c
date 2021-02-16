// use the do-while in the main char function 
//lopp through the inputs from the keyboard 
#include<stdio.h>
#include<ctype.h>

int main(){
    int acter;

    do{
        acter = getchar();
        if(isalpha(acter))
        {
            putchar(acter);}
    }
    while(acter != '\n');
    return 1;
}