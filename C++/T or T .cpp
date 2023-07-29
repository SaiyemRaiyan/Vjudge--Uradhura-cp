#include<iostream>
using namespace std;
 
int main()
{
  int N,A,B;
  cin>>N;
  cin>>A;
  cin>>B;

  if(N*A<B)
        cout<<N*A<<endl;
  else 
        cout<<B<<endl;
  return 0;
}