#include<iostream>
using namespace std;

int main() 
{
	int i;
	cin>>i;

	while(i--)
   {
	    int n;
	    cin>>n;

	    if(n<10)
           {
	        cout<<"Thanks for helping Chef!"<<endl;
	    }

	    else
            {
	        cout<<-1<<endl;
	    }

	}
	return 0;
}