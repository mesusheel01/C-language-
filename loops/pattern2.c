#include <stdio.h>
void main()
{
    int n,a,b;
    printf("Enter the length of pattern\n");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(a=n;a>=0;a--)
    {
        for(b=1;b<=a-1;b++)
        {
        printf("*");
        }    
    printf("\n");
}
}