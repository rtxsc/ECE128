#include <stdio.h>

#define max 8 // pre-processor directive

// const int max = 8; // constant keyword

int main() {

  int i, large, small;
  int num[max]={4,8,13,0,-5,3,20,-1};
  printf("Array:");
  
  for(i=0; i<max ; i++)
    printf("%d \n",num[i]);
  
  large = num[0];
  small = num[0];
  
  for(i=0; i<max ; i++){
    if(num[i] > large) large = num[i];
    if(num[i] < small) small = num[i];
  }
  
printf("Smallest value is %d\n",small);
printf("Largest value is %d\n",large);
	return 0;
}









