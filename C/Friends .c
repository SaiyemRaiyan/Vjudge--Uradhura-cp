#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int b[2001][2001],len[2002];
char str[2001][2001];
int main()
{
	int n,i,j,k;
	long long int s=0;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		k=0;
		scanf("%s",&str[i]);
		for(j=0; j<n; j++)
		{
			if(str[i][j]=='1')
				b[i][k++]=j;
		}
		len[i]=k;
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(str[i][j]=='0')
			{
				for(k=0; k<len[i]; k++)
				{
					if(str[b[i][k]][j] == '1')
					{
						s++;
						break;
					}
				}
			}
		}
	}
	printf("%lld\n", 2*s);
	return 0;
}