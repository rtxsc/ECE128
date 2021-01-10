/*


Write a C program using nested if statement based on the pseudo code below. 
This program prompts user for two integers. 
It finds whether the first integer is greater than, less than or equal to the second integer. 
If both integers are the same, find out whether the number is 
even or odd value using modulo operator.

•	Print out program description and user directions
•	Ask user for the first integer
•	Ask user for the second integer
•	Compare the first integer with the second integer 
•	Print out the finding



*/

#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two numbers separated by space:");
    scanf("%d %d",&num1,&num2);

    if(num1 > num2) 
        printf("%d is larger than %d\n", num1,num2);
    else if(num1 < num2) 
        printf("%d is larger than %d\n", num2,num1);
    else{
        printf("%d is equal to %d\n", num1,num2);
        if(num1%2 == 0)
            printf("%d is an even number\n",num1);
        else
            printf("%d is an odd number\n",num1);
    }
    return 0;
}
