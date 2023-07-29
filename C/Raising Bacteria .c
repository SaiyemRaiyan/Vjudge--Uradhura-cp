#include<stdio.h>
int main()
{
    long long int n,i, m=0;
    scanf("%lld", &n);
    while(n>=1)
   {
        if(n%2 == 1)
        {
            m++;
            n--;
        }
        else
        {
            n/=2;
        }
    }
       printf("%d\n", m);
    return 0;
}
