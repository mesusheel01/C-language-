#include <stdio.h>
void main()
{
    int *p,a;
    a=72;
    p=&a;
    *p++;
    printf("%d",*p);
}
