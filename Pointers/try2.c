#include <stdio.h>
int main() {
  int x[5] = {1, 2, 3, 4, 5}; // index: 0,1,2,3,4
  int* ptr;

  ptr = x; // assigning first address of array x to pointer

    // normal array element with address printout
    for(int i=0; i<5 ; i++){
        printf("address of x[%d] is %p\n",i,&x[i]);
    }

    printf("\n\n\n");

    // pointer method of displaying pointed memory location address
    for(int i=0; i<5 ; i++){
        printf("address of x[%d] is %p\n",i,ptr+i);
    }

  return 0;
}