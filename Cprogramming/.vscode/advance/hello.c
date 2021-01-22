#include <stdlib.h>
#include <stdio.h>

#define SIZE 64

int main(){
    char *buff;
    int score;
    buff = malloc(sizeof(char)*SIZE);
    if(buff == NULL){
        printf("No memory allocated");
        return 1;
    }
    printf("Type your name: ");
    //SIZE as to ensure buffer doesn't overflow
    fgets(buff, SIZE,stdin);
    printf("Hello %s, nice to meet you",buff);

}
