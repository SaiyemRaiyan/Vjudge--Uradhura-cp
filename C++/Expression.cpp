#include<iostream>
#include<cmath>
#include<algorithm>
 using namespace std;
 
int main() 
{

    int n, arr[5];
 
    int a, b, c;
 
    cin>>a>>b>>c;
 
    arr[0] = a*b+c;
    arr[1] = a+b*c;
    arr[2] = a*(b+c);
    arr[3] = (a+b)*c;
    arr[4] = a+b+c;
    arr[5] = a*b*c;
 
    sort(arr, arr+6);
 
    printf("%d\n", arr[5]);
    return 0;
  
} 