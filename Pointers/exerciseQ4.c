// Exercise Q4 Pointers

#include<stdio.h>

int passValue(int num1, int num2);

int main(){

    int num1 = 10, num2 = 100;
    printf(" Num1 = %d Num2 = %d\n",num1,num2);
    passValue(num1,num2);
    printf(" Num1 = %d Num2 = %d\n",num1,num2); 
    return 0;
}

int passValue (int num1, int num2){

    num1 = 20;
    num2 = 2000;

}