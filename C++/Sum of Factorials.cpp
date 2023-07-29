#include <bits/stdc++.h>
using namespace std;

int main()
{
     long long int fact[25];
     long long int i,j,k,l,m,n,t;
     
     fact[0]=1;
     for(i=1;i<=20;i++)
     {
         fact[i]=fact[i-1]*i;
         //cout<<fact[i]<<endl;
     }
     scanf("%lld",&t);
     for(i=1;i<=t;i++)
     {
        stack<int>s;
        scanf("%lld",&n);
        for(j=20;j>=0;j--)
        {
            if(fact[j]<=n)
            {
                n=n-fact[j];
                //cout<<j<<endl;
                s.push(j);
            }
        }

         //cout<<n<<endl;
         if(n==0)
         {
             printf("Case %d: ",i);
             while(s.size()!=1)
             {
                 printf("%d!+",s.top());
                 s.pop();
             }
             printf("%d!\n",s.top());
             s.pop();

         }
         else
         {
             printf("Case %d: impossible\n",i);
         }

     }

     return 0;

}