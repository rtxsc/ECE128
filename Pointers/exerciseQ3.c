// Exercise Q3 Pointers

#include<stdio.h>

int main(){

    char huruf[] = "abct";
    char* charPtr;
    charPtr = huruf;

    printf("%c%c%s\n",*charPtr+2,*charPtr,charPtr+3);

}

