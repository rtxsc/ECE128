#include <stdio.h>

int main() {
    int x = 3;
    int y = 1;  
    int arr_a [5];
    arr_a[0]=5;
    arr_a[1]=7;
    arr_a[2]=9;
    arr_a[3]=12;
    arr_a[4]=13;
    printf("%d %d %d %d", arr_a[y], arr_a[x], arr_a[x+y],arr_a[x-y]);
    printf("\n%d %d",arr_a[0],arr_a[4]);
    return 0;
}