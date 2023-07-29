 #include<iostream>
  using namespace std;
  int main()
  {
      long int n,r;
      cin>>n;

      r=n/5;
      if ( n==(r*5))
        cout<<r<<endl;
      else
        cout<<(r+1)<<endl;

      return 0;
  }