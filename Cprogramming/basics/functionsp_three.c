#include<stdio.h>

// the following is to show that the local variable can only be used within the local function
// try not declaring x in main and see aht happens 
void cheers(void);

int main(){
    puts("Everyone gets free dinner! ");
    cheers();
    puts("Everyone gets free dessert! ");
    cheers();

    return 0;
}

void cheers(void){
    int x;

    for(x=0; x<3;x++){
        printf("Huzzah! ");
    }
    putchar('\n');
}