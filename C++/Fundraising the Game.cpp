#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int s=0;

    for(int i=0; i<a; i++)
    {
        int m;
        cin>>m;
        s+=m;
    }

    string str;

    if(s == b)
    {
        str = "Just enough";

    }
    else if(s>b)
    {
        str= " Success";
    }
    else
    {
        str = "More funding required";
    }
    cout<<str;
    return 0;
}
