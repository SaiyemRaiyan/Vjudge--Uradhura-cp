#include<iostream>
using namespace std;
 
int main()
{
 int n, n1, n2;
    cin>>n;

      n1 = n%10;
      n2 = n/100;

    if (n1 == n2)
        cout<<"Yes";
    else
        cout<<"No";
}