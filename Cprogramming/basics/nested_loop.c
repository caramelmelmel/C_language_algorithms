#include <stdio.h>

//here is an example of O(n^2) nested loops here.
//the putchar function here specifies an unsigned char to the stdout aka the terminal 

int main(){
    char alpha;
    int numeric;
    for(alpha='A';alpha<'K';alpha++){
        for(numeric=0;numeric<10;numeric++){
            printf("%c-%d\t",alpha,numeric);
        }
        putchar('\n');
    }
    return 0;
}

