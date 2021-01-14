// Exercise Pointers

#include<stdio.h>

int main(){
  int num = 10;
  int* pointer = &num; // put num address into pointer
  *pointer = *pointer + num;
  printf("num is %d\n",num);
  printf("pointer content is %d\n",*pointer);
  printf("num address is %p\n",&num);
  printf("pointer address is %p\n",pointer);

}