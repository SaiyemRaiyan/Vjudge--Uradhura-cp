#include<iostream>
using namespace std;

int main()
{
  long long int n, k=0;
  long long int x=1;

  cin >> n;

  while (x <= n)
  {
    x *= 2;
    k += 1;
  }
     cout << k - 1;

}