#include<stdio.h>

int main(){
    //structures here can contain various datatypes
    struct bank{
        int account;
        float balance;
    };
    //just like java, bank can be like your class
    //you can declare multiple variables here like checking and savings 
    struct bank checking,savings;

    checking.account = 1234;
    checking.balance = 567.89;
    savings.balance = 100.49;
    savings.account = 1000;

    printf("Checking account %d has a balance of %f\n",
    checking.account,
    checking.balance);
    printf("Savings account %d has a balance of %f \n",
    savings.account,
    savings.balance);
    return 0;
}