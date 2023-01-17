#include <stdio.h>
void main()
{
    int i,j,k,n,l;
    printf("Enter the value of n to print the pattern\n");
    scanf("%d",&n);
    for(i=1; i<=4; i++)
    {
        for(j=1; j<i; j++)
            printf(" ");
        for(k=i; k<=4; k++)
            printf("*");
        for(l=n; l>i; l--)
            printf("*");

        printf("\n");
    }
    for(i=2; i<=n; i++)
    {
        for(j=i; j<=n-1; j++)
            printf(" ");
        for(k=1; k<=i; k++)
            printf("*");
        for(l=2; l<=i; l++)
            printf("*");
        printf("\n");
    }
}
