#include<stdio.h>
 int main()
{
 
    long long a,b,x,m;
        scanf("%lld %lld %lld", &a, &b, &x);
    m = b/x - a/x;
      if( a %x==0)
        m++;
 
    printf("%lld\n", m);
 
 
    return 0;
}