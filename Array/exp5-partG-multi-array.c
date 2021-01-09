// multi-array Part G
#include <stdio.h>

// prototype must be above main()

int addNumbers(int[]);

int main() {

  int i;  
  int array[5];
  printf("Enter 5 integers separated by spaces:\n");
  
  for(i=0;i<5;i++){
  	scanf("%d",&array[i]);
  }
  printf("\n\nTheir sum is:%d\n\n",addNumbers(array));  
	return 0;
}

// definition would normally be below main()

int addNumbers(int fiveNumbers[]){
	int i;
  int sum = 0;
  for(i=0; i<5 ; i++)
    sum += fiveNumbers[i];
  
  return sum;

}