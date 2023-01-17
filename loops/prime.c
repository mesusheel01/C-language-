#include <stdio.h>
void main()
{
    int i,j,c;
    printf("The prime numbers between 50 and 200 are : \n");
    for(i=50;i<=200;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            c++;
        }
        if(c==2)
        printf("%d,",i);   
    }
}
}