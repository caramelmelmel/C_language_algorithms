#include<stdio.h>

int main(){
    // all arrrays are stored in a single dimension
    //the second number 5, has to be set with the longest string in the array
    char names[4][5] ={
        "Ant",
        "Bee",
        "Cat",
        "Duck"
    };
    int x;

    // you can also manipulate characters within a specific string 
    names[2][2] = 'r';

    for(x=0;x<4;x++){
        printf("%s\n",names[x]);
    }
    return 0;
}