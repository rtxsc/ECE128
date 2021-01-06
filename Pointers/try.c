#include <stdio.h>
int main()
{

    int* p; // 1st-recommended
    int *p1; // 2nd-method-fairly confusing
    int * p2; // 3rd-method

    int* pc, c , d; // pointer pc , normal integer c , d
    c = 5;
    pc = &c; // DO NOT DO *pc = &c;

    printf("Value inside c is %d\n", c);
    printf("Address of variable c is %p\n",&c);
    printf("Address of pc is %p\n",pc);
    printf("Value inside pc is %d\n", *pc);

    printf("\n\n\n");

    c = 1; // reassign c with new value

    printf("Value inside c is %d\n", c);
    printf("Address of variable c is %p\n",&c);
    printf("Address of pc is %p\n",pc);
    printf("Value inside pc is %d\n", *pc);

    *pc = 76;

    printf("\n\n\n");

    printf("Value inside pc is %d\n", *pc);
    printf("Value inside c is %d\n", c);

    printf("\n\n\n");


    c = 10;
    d = -10;

    pc = &c; printf("Value inside pc is %d\n", *pc);
    pc = &d; printf("Value inside pc is %d\n", *pc);


    return 0;
}