#include<stdio.h>
#include<math.h>
int main(void)
{
      long long n, i;
      scanf("%lld", &n);
     for (i=1; i*i<n; i++)
       {
       if (n%i==0)
          printf("%lld\n", i);
     }
      for (i=sqrt(n); i>=1; i--)
      {
       if (n%i==0) 
      printf("%lld\n", n/i);
  }
  return 0;
}