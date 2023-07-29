#include<bits/stdc++.h>

using namespace std;

int main()
{
   map<long long,long long>mp;
   queue<long long> q;
   long long n;
   while(scanf("%lld",&n)!=EOF)
   {
       mp[n]++;
       if(mp[n]==1)
       {
          q.push(n);
       }
   }
   while(!q.empty())
    {
       cout<<q.front()<<" "<<mp[q.front()]<<endl;
       q.pop();
    }
   return 0;

}