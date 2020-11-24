#include<stdio.h>
#include<math.h>

int main()
{
    printf("i \t\t\t squared\n\n");
    for(int i = 1; i < 20 ; i++){
       printf("%d \t\t\t %.f\n", i, pow(i,2));
       
   }
    return 0;
}