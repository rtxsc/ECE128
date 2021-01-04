#include <stdio.h>

void compare(int x,int y); // prototype for this function

int main(){
    int num1,num2;

    printf("Input two integers: "); // prompt user to input some number
    scanf("%d %d", &num1, &num2);//input
    // call the function below
    compare(num1,num2);
  
}

// create a function definition down here Zulhazwan
// name of function  = compare
// parameters for this function = int x , int y
// return type of this function = void
// inside 

// function definition for compare(arg1,arg2)
void compare(int x,int y){
  
    int min, max;
    if(x>y)
    {
        max = x;
        min = y;
        printf("max is %d, min is %d", max, min);
    } else {
        max=y;
        min=x;
        printf("Max is %d, min is %d .", max,min); 
    }
  
}
//meerul was here
//wow faster
//sorry