#include<iostream>
 
using namespace std;
int main()

{
	int x, y;
	cin >> x >> y;
	if (x <= y && y <= 6 * x)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}