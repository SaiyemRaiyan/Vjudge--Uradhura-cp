#include<iostream>
using namespace std;

int main()
{
    int x,y,m;
    cin >> x >> y;


    if(y%2 == 0)
    {
        m = y/2;
    }

      else
    {
        m = y*5;
    }

    cout << x << 0 << m << endl;

    return 0;

}