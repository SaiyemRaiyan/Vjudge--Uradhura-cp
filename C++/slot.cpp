#include<iostream>
 
using namespace std;
 
int main()
{
   char ch1,ch2,ch3;
   cin>>ch1>>ch2>>ch3;
   if(ch1==ch2 && ch2 == ch3 && ch1 == ch3)
   {
       cout<< "Won" <<endl;
   }

   else
   {
       cout<< "Lost" <<endl;
   }

    return 0;
}