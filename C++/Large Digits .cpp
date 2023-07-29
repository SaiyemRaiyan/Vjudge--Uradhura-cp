#include<iostream>
using namespace std;
 
int main()
{
   int a,b,sA=0,sB=0;
 cin>>a>>b;

 while(a!=0)
 {
 
   sA+= a%10;
   a/=10;

   sB+= b%10;
   b/=10;
 }

 if(sA>=sB)
   cout<<sA;
else
    cout<<sB;
 
}
 