#include<stdio.h>

void modifyVariables(double x, double *y,int i, int *j);


int main(){

    double x1 = 32.0;
    double y1 = 21.0;
    int m = 10;
    int n = 20;
    modifyVariables(x1,&y1,m,&n);
    /*
    x = *y; // assign as value --- x = 21
    *y = x; // assign to address --- *y = 21
    i = 2 * i; // assign as value --- i = 20
    *j = 2 * j; // assign to address ---- *j = 40
    
    
    */
    printf("%.2f %.2f %d %d\n",x1,y1,m,n); // 32.00 21.00 10 40 

    x1 = 1.5;
    y1 = 2.3;
    m = 8;
    n = 9;
    modifyVariables(x1,&y1,m,&n);
    printf("%.2f %.2f %d %d\n",x1,y1,m,n); // 1.50 2.30 8 18
}

// modifyVarible(value,reference,value,reference)
// modifyVarible(32.0 , 21.0 , 10 , 20)
void modifyVariables(double x, double *y,int i, int *j){

    x = *y; // assign as value --- x = 2.3
    *y = x; // assign to address --- *y = 2.3
    i = 2 * i; // assign as value --- i = 16
    *j = 2 * (*j); // assign to address ---- *j = 18 
}