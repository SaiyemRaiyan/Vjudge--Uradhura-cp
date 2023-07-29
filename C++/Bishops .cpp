#include<bits/stdc++.h>
using namespace std;
int main()
{
     int N, a, b, c, d, m, i=1;
     scanf("%d", &N);
     while(N--)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
            m = i++;
        printf("Case %d: ", m);
        int j =  abs(a-c);
        int k = abs(b-d);
        int p = j%2;
        int q = k%2;
        if(p == q)
       {
            if(j == k) 
                 printf("1\n");
            else 
                 printf("2\n");
        }
        else 
                printf("impossible\n");
    }
    return 0;
}