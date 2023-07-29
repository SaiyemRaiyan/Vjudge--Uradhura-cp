#include<iostream>
using namespace std;
 
int main()
{
	int x, y; 
        cin >> x >> y;

	if(x <= 12)
                y =y / 2;
	if(x <= 5)
                  y = 0;

	cout << y << endl;

}