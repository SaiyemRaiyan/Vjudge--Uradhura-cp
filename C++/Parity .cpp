#include<iostream>
using namespace std;

int main()
{

    long long int num;
    int n,T;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        cin >> n;
         num=0;
        while(n != 0)
        {
           if(n%2 == 1)
                num++;
                 n/=2;
        }
        if(num% 2 == 0)
             cout << "Case " << i << ": even" << endl;
        else
             cout << "Case " << i << ": odd" << endl;
    }
    return 0;

}