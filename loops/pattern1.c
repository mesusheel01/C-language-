#include <stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the length of the pattern\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i-1;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}