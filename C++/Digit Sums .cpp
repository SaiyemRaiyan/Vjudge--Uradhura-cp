#include<iostream>
using namespace std;

int main()
{
	int a,b,sum=0;
	cin>>a;
	b=a;
	while(a >=1 )
	{
		sum+=a%10;
		a/=10;
	}

	if(b%sum==0) 
                         cout<<"Yes";
	else 
                   cout<<"No";
}