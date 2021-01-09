// Array exercise Q5
#include <stdio.h>

void ganda(int x);

int main() {
  int i;
  float array[4]={3.45, 2.72, 9.43, 5.98};
  
  for(i=0;i<4;i++){
      ganda(array[i]);
  }
  return 0;
}

void ganda(int x){
    printf("Result of the multiplication : %d\n", x*2);

}