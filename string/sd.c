#include <stdio.h>
int max_of_four(int a, int b, int c, int d,int sum)
 {
    scanf("%d %d %d %d", &a, &b, &c, &d);
   if(a>b && a>c && a>d)
sum=a;
    if(b>a && b>c && b>d)
sum=b;
    if(c>b && c>a && c>d)
sum=c;
    if(d>b && d>c && d>a)
sum=d;
    return sum;
}

