#include <stdio.h>
void main()
{
    int a=10,b=5;
    printf("Numbers before swapping %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Number after sorting is %d %d ",a,b);
}