#include<stdio.h>

void modifyVariables(double x, double* y,int i, int* j);

int main(){

    double x1 = 32.0;
    double y1 = 21.0;
    int m = 10;
    int n = 20;
    modifyVariables(x1,&y1,m,&n);
    printf("%.2f\t%.2f\t%d\t%d\n",x1,y1,m,n); 

    x1 = 1.5;
    y1 = 2.3;
    m = 8;
    n = 9;
    modifyVariables(x1,&y1,m,&n);
    printf("%.2f\t%.2f\t%d\t%d\n",x1,y1,m,n); 
}

void modifyVariables(double x, double* y,int i, int* j){

    x = *y; 
    *y = x; 
    i = 2 * i; 
    *j = 2 * (*j); 
}
