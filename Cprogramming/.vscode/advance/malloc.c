#include <stdlib.h>
#include <stdio.h>

int main(){
    int *scores,x;

    scores=malloc(sizeof(int)*4);
    if(scores == NULL){
        puts("Unable to allocate memory");
        return 1;
    }

    //ref to the memory locations allocated
    *(scores+ 0) = 100;
    *(scores+1) = 97;
    *(scores+2) = 105;
    *(scores+3) = 110;

    //x here refers to the offset
    for(x=0;x<4;x++){
        printf("Score %d: %d\n",x+1,*(scores+x));
    }
    return 0;

}