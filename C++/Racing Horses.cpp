#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        long arr[n], a=1000000000;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0; i<n; i++)
                {
			long tem = abs((arr[i]-arr[i+1]));
				if(tem<a)
                                {
					a=tem;
				}
		}
		cout<<a<<endl;
    }
}