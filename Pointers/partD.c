// pass-by-reference

#include<stdio.h>

void fncn(int* p, int* q); // prototype must follow definition header

int main(){
    int x,y;
    x=20;
    y=30;
    printf("\n Value of a and b before function call =%d %d", x, y); 
    fncn(&x,&y);  // fncn(container_x,container_y);
    printf("\n Value of a and b after function call =%d %d\n",x, y);
  
}

void fncn(int* p, int* q){
    *p=*p+*p; // 40 = 20 + 20 (container_x)
    *q=*q+*q; // 60 = 30 + 30 (container_y)
}