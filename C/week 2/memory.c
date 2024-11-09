#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* x = malloc(3*sizeof(int));//distribute "a" memory like a x[3];
    x[0]=2;
    x[1]=3;
    x[2]=23;

    free(x);

}