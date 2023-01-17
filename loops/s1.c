#include <stdio.h>
void main()
{
    int i,j,m,k;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=4;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("*");
        for(m=2;m<=i;m++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(k=i;k<5;k++)
            printf("*");
        for(m=1;m<5-i;m++)
            printf("*");
        printf("\n");
    }
}
