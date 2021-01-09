#include <stdio.h>
int main() {
    char huruf[5] = {'a','b','c','t','\0'};

    char* charPtr;

    charPtr = huruf;

    printf("%c",*charPtr+2);
    printf("%c",*charPtr);
    printf("%c\n",*charPtr+19);

    return 0;
}