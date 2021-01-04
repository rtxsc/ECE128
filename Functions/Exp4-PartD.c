#include<stdio.h>

// int addiere(int summand1,int summand2); // prototype
int addiere(int,int); // prototype (only data type is compulsory)

int main(){
    int x,y;
    printf("This is a program to add two integers.\n");
    printf("Please enter two integers:");
    scanf("%d %d",&x,&y);
    printf("The sum of integers is %d", addiere(x,y));

}

// function definition for addiere
int addiere(int a,int b){
    return a+b; // directly returning the sum of two numbers
}