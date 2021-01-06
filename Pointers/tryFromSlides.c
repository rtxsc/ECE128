#include<stdio.h>

int main()
{ 
    int num=15;
    int* ptr;
    ptr= &num;
    printf(" The value of num is %d \n", num);
    printf(" The value of num is %d \n", *ptr);
    printf(" The address of num is %p \n", &num);
    printf(" The address of num is %p \n", ptr);
}
