#include<stdio.h>
//logical operators
/* && AND
   || OR
   !  NOT*/
int iscaps(int ch);

int main(){
    int c;

    do{
        c = getchar();
        if(iscaps(c))
            putchar(c);
    }
    while(c != '\n');

    return 0;
}

int iscaps(int ch){
    if(ch < 'A' || ch > 'Z')
        return 0;
    else{
         return 1; }
}

// 0 is false and 1 is true 
// when pressing enter you mean to do the \n