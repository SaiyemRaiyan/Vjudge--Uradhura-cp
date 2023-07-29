#include<stdio.h>
int main()
{
   int n,i,sum;
     scanf("%d",&n);
 for(i=1; i<=10; i++)
  {
     sum=n*i;

    printf("%d x %d = %d\n",n, i, sum);
   }
      return 0;
}