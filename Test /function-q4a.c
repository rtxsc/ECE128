/*

a)	Based on the following problem:

i)	Write the function definition for function calculateProductOf().
The function receives two float numbers and return the product of the two numbers.
(2 marks)

ii)	Write the function prototype for the function calculateProductOf().
(1 marks)

iii)	Write a function call for calculateProductOf() from within the main function.

(3 marks)

*/

#include<stdio.h>

float calculateProductOf(float,float);

int main(){
    float a = 1.2, b= 1.4;
    printf("%.2f x %.2f is %.2f\n",a,b,calculateProductOf(a,b));
}

float calculateProductOf(float num1,float num2){
    return num1*num2;
}
