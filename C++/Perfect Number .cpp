#include<bits/stdc++.h>
using namespace std;

int digit(int n)
{
   int a=0;
   while(n>0)
{
     a=a+n%10;
     n=n/10;
   }
   return a;
}
int main()
{
    int k,n=18,a;
    cin>>k;
    while(k)
    {
        n++;
        if(digit(n)==10)
        {
            a=n;
            k--;
        }
    }
    cout<<n<<endl;
    return 0;
}