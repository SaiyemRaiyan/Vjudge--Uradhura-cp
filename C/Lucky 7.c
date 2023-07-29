#include<stdio.h>
int main ()
{
     int n,a;
      scanf("%d",&n);
while(n!=0)
{
          a=n%10;
if(a==7) 
          break;
       n=n/10;
}
if(a==7) 
          printf("Yes");
else 
          printf("No");
}