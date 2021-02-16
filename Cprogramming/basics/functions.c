#include<stdio.h>
/* type name(arguments){}*/
// it's just like your python
// void means return nothing so before run time your ide will shoot out an error
// same like py the rules of a function apply only diff is to declare the return datatype

//Take for example, the function below returns nothing 
//declare before the main to declare the type 
void blorf(void);

int main(){
    puts("The main Function always runs first");

    //you can call the function declared like this 
    blorf();

    printf("Thanks, blorf()");

    return 0;
}

void blorf(void){
    puts("The blorf() function runs when called");
}