// Simple Calculator program using switch…case structure
#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result=0.0f;

    /* Print welcome message */
    printf("SIMPLE CALCULATOR | Made with C\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");

    /* Input two number and operator from user */
    scanf("%f %c %f", &num1, &op, &num2);  

    /* Switch the value and perform action based on operator*/
    switch(op)   
    {
        case '+': 
            result = num1 + num2; 
            break;

        case '-':  
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break; 

        default: 
            printf("Invalid Operator"); 
    }

    /* Prints the result */
    printf("%.2f %c %.2f = %.2f\n", num1, op, num2, result);

    return 0;
}
