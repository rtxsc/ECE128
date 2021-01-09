// Array exercise Q4https://codeshare.io/
#include <stdio.h>


int main() {
    // [row][col]
    int number[2][3] = {{1,2,3},{4,5,6}};
  
  	printf("\nBefore Swapping\n");
  
    for(int r=0; r <2 ; r++){
      	for(int c=0; c <3 ; c++){
    			printf("%d ",number[r][c]);
    		}
      	printf("\n");   
    }
  
  	int temp = number[0][0];
  	number[0][0] = number[1][2];
  	number[1][2] = temp;

  	printf("\nAfter Swapping\n");

  	for(int r=0; r <2 ; r++){
      	for(int c=0; c <3 ; c++){
    			printf("%d ",number[r][c]);
    		}
      	printf("\n");   
    }
  
	return 0;
}

/*
[0,0]	[0,1]   [0,2]
[1,0]	[1,1]	[1,2]
*/