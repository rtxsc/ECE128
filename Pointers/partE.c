// Part E : Pointers to Array

#include<stdio.h>


int main(){
    int i,j,n; 

    float a[100]; // 4 bytes x 100 element = 400 Bytes
    float* ptr;
   
    printf("\nEnter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the array elements: ");

    for(i=0;i< n;i++) scanf("%f",&a[i]);

    printf("Array element are: \n");
    j=0;
    for(ptr=a; ptr<(a+n);ptr++)
    	printf("Value of a[%d]=%f stored at address %p\n",j++,*ptr,ptr);  
}

