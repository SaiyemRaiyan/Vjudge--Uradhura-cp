#include<iostream>
using namespace std;

int main()
{
    int n, a[8]= {0};
    cin >> n;
    for (int i= 1; i<=7; i++)
    {
        cin >> a[i];
        a[i] += a[i-1];
    }
    n = (n - 1) % a[7] + 1;
    for (int i=1; i<=7; i++)
    {
        if (a[i] >= n)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}