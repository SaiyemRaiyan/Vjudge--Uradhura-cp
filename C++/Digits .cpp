#include<iostream>
using namespace std;
 
int main()
{
  int a,b,c=0;
  cin >> a >> b;

  while( a > 0 )
  {
    a = a / b;
    c++;
  }
  cout << c << endl;
}