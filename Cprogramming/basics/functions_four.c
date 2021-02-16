#include<stdio.h>
// the following passes the values to the function below 
// this is for one parameter 
// to pass in multiple you must do it like this 
//eg. repeat(int count, void a, float g)

// again, the protoype is important because of the warning of the function
void repeat(int count);
int main(){
    puts("At first the raven was like: ");
    repeat(1);
    puts("But then he was all: ");
    repeat(5);

    return 0;
}
void repeat(int count){
    int x;
    for(x=0;x<count;x++)
        puts("Nevermore!");
}