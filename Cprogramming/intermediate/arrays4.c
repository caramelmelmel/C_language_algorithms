#include<stdio.h>

// this is another form of strings as character arrays it's the same as arrays3
//null cahracter must be added to terminate the string

int main(){
    char text[] = {'I',' ','a','m',' ','a',' ','s','t','r','i','n','g','!','\0'};

    puts(text);
    return 0;
}