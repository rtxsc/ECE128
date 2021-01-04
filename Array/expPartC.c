// exp Array Part C
#include <stdio.h>

int main() {
	int num[4];
  int i;
  
  for(i=0; i<4; i++){
    printf("\ninput num [%d]: ", i);
    scanf("%d", &num[i]);  
	}
	
  printf("\narray num[%d]: ", i);
  for(i=0; i<4; i++) printf("%d ", num[i]);

}