// Exercise Q2 Pointers

#include<stdio.h>

int main(){
	 int num[6]={4,5,7,9,13,2};
   int* ptr;
   ptr = &num[5]; // ptr is holding address of num[5]
   printf("value at num[5] is %d\n", *ptr);
  // moves from num[5] to num[2]
   ptr = ptr - 3;
   printf("value at num[2] is %d\n", *ptr); // we are now at num[2]
    *ptr = 100;
  printf("value at num[2] is %d\n", *ptr);

}

