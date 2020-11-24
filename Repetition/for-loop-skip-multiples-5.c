#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 100; i++)
    {
        if(i%5==0) {
            printf("\n");
            continue;
        
        }
        if(i<10)
            printf("0%d ", i);
        else
            printf("%d ", i);
        
    }
        
    return 0;
}