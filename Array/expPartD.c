#include <stdio.h>
#include <string.h>

int main() {
	int i;
  char string1[20];
  
  char string2[] = "string literal";
	
  printf("Enter a string: ");
  scanf("%s", string1);

  printf("string1 is: %s \nstring2: is %s\n"
      "string1 with spaces between characters is:",
      string1, string2);

  for(i=0; string1[i] != '\0'; i++){
    printf("%c", string1[i]);
    if(strcmp(&string1[i], " ")==0) continue;
  }
}