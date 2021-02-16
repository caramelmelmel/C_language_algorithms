#include<stdio.h>
#include<string.h>

int main(){
    char str1[64];
    char str2[64];
    char str3[64];
    fgets(str1, 64, stdin);
    fgets(str2,64,stdin);
    strcat(str1,str2);
    printf("%s\n",str1);
    return 0;
}





