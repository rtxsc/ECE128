#include <stdio.h>
int main() {
    
    int num = 20;
    int* pointer;
    pointer = &num;
    
    *pointer = *pointer + 4;

    printf("Content of num is %d\n",num);
    printf("Content of pointer is %d\n",*pointer);
    printf("Address of variable num is %u\n",&num);
    printf("Address of variable pointer is %u\n",pointer);


    return 0;
}
