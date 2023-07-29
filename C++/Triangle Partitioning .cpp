#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,test;
    double AB,BC,CA,AD,DE,ratio;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        cin>>AB>>CA>>BC>>ratio;
        ratio = ratio/(ratio+1);
        AD = AB*sqrt(ratio);
        printf("Case %d: %lf\n",i,AD);
    }
    return 0;
}
