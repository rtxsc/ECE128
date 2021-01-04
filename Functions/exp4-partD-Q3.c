#include <stdio.h>

// declare ONE global variable for counting Odd number
int counter = 0;

void determine(int x);

int main(){
  int y;
  int z;
    printf("enter five number:\n");
    for(y=1; y<=5; y++){
        scanf("%d",&z);
        determine(z); // function call
  }// end of your for-loop
  printf("the total odd number: %d", counter);
  
}

// function definition for determine()
// function return type is going to be void
void determine(int z){
	if(z%2!=0)counter++;
}

