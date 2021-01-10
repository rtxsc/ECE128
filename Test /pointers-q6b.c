#include <stdio.h>
int main() {
    char taxi[5] = {'a','b','c','d','\0'};

    char* charPtr;

    charPtr = taxi;

    printf("%c",*charPtr+2);
    printf("%c",*charPtr);
    printf("%c\n",*charPtr+1);

    return 0;
}
