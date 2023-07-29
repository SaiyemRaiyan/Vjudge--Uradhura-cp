#include<iostream>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int b = str.length();
	cout << str[b / 2];
}