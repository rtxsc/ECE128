#include<stdio.h>

int main()
{
   int i = 1;

    do{
        if(i%2 == 0){
            if(i < 10)
                printf("#%d ",i);
            else{
                if(i==10) printf("\n");
                printf("$%d ",i);
            }
               
        }
           
        i++;
    }while(i<=20);
        
    return 0;
}