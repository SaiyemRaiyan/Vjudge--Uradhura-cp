#include<iostream>
using namespace std;
int main(void)
{
	int x,y,z;
	scanf("%d %d", &x, &y);
	if(y%x==0)
		z=x+y;
	else
		z=y-x;

	printf("%d\n", z);

	return 0;
}