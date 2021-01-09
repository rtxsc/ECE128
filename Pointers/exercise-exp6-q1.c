#include <stdio.h>
int main() {
    int num = 10;
    int* ptr;
    ptr = &num;

    *ptr = *ptr + 2;

    printf("num is %d\n",num);
    printf("value inside ptr is %d\n",*ptr);
    printf("address of num is %p\n",&num);
    printf("address of ptr is %p\n",ptr);

    return 0;
}