#include<stdio.h>
#include<string.h>

int main(){
    char first[] = "I would like to go ";
    char second[] = "from here to there\n";
    char buffer[50];

    //copy first into buffer
    strcpy(buffer,first);
    //concatenate
    strcat(buffer,second);
    puts(buffer);

    //printf("%s %s\n",first,second);

    return 0; 

}