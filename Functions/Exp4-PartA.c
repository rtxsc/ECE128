#include<stdio.h>

int square (int y); // Type: Functions with arguments and return values

int main(){
    int x ;

    for ( x = 1; x <=10; x++)
    {
        printf("%d\t ",square(x));
    }
    printf("\n");
    
}

int square(int y){
    return y*y;
}