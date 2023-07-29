#include<iostream>
 using namespace std;
 long long n,ans;
 int main()
{
     int T;
     cin >> T;
    while(T--)
{
         cin >> n;
        ans = 0;
       while(n % 2 == 0)n /= 2,
              ans++;
       while(n % 3 == 0)n /= 3,
             ans += 2;
        while(n % 5 == 0)n /= 5,
          ans += 3;
        if(n == 1) cout << ans << endl;
        else cout << -1 << endl;
     }
    return 0;
 }