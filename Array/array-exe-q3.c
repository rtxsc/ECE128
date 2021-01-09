// Array exercise Q3
#include <stdio.h>

int main() {
  
  int mata[5];
  
  printf("\nPlease enter 5 integers separated by space:\n");

  for(int i=0; i<5 ; i++) scanf("%d",&mata[i]);
  
  printf("Content of array are:\n");
  for(int i=0; i<5 ; i++)
  	printf("%d\n",mata[i]);
	return 0;
}