#include<bits/stdc++.h>
#define maxl 100010
#define mod 1000000007
using namespace std;
 
int n,k,cas;
double f[maxl];
 
inline void init()
{
	f[1]=0;int len,cnt;
	double sum;
	for(int i=2;i<maxl;i++)
	{
		len=sqrt(i);cnt=0;sum=0;
		for(int j=1;j<=len;j++)
		if(i%j==0)
		{
			cnt++;sum+=f[j];
			if(j*j<i)
			{
				if(i/j!=i)
					sum+=f[i/j];
				cnt++;
			}
		}
		f[i]=(sum+cnt)/(cnt-1);
	}
}
 
int main()
{
	init();
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&n);
		printf("Case %d: %.6f\n",i,f[n]);
	}
	return 0;
}
