#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, sum;
    scanf("%lld", &N);

    if(N%2==0)
   {
        sum =N/2;
    }
    if(N%2==1)
   {
        sum=(N-1)/2-N;
    }

    printf("%lld\n", sum);

    return 0;
}