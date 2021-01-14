#include<stdio.h>

void fncn(int p, int q);

int main(){
    int x,y;
    x=20;
    y=30;
    printf("\n Value of a and b before function call =%d %d", x, y); 
    fncn(x,y);  // fncn(20,30);
    printf("\n Value of a and b after function call =%d %d\n", x, y);
  
}

void fncn(int p, int q){
    p=p+p; // 40 = 20 + 20
    q=q+q; // 60 = 30 + 30
}