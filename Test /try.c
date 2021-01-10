#include <stdio.h>

int main()
{
    int a[100];
    ____ i, n, sum=0;
	
       printf("\n\nFind sum of all elements of array:\n");
       printf("--------------------------------------\n");	

       printf("Input the number of elements to be stored in 
       the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(_____;i<n;i++)
        {
	      printf("element - %d : ",_____);
	      scanf("%d",______);
	    }

    for(i=0; i<n; i++)
    {
        sum += ______;
    }

    printf("Sum of all elements stored in the array is : 
    %d\n\n",______);
}
