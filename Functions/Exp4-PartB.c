#include<stdio.h>
// #define DO_THIS_BLOCK

int square (int y);

void loop(); // new function prototype

int main(){
    
    // #if defined = #ifdef .... #endif
    // #if not defined = #ifndef .... #endif
    #ifdef DO_THIS_BLOCK
        int x ;
        for ( x = 1; x <=10; x++)
        {
            printf("%d\t ",square(x));
        }
        printf("\n");
    #endif

    loop();
}

int square(int y){
    return y*y;
}

// new function definition
void loop(){
    int x;
    for(x=1; x<=10; x++)
    {	
        printf("%d\t ",square(x));
    }
    printf("\n");


}


