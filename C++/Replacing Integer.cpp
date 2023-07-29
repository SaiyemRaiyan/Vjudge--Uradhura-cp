#include<iostream>
using namespace std;
 
int main()
 {
	
    long long n,i, tem=0;
    cin>>n>>i;
    long long x = n%i;
    tem = i - x;
    
    if (tem >= x)    
                  cout<<x;
    else 
          cout<<tem;
    
	return 0;
}