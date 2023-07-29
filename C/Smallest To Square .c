#include<stdio.h>
int main()
{
    int n,ans=1, c=1,p;
    int arr[1000001]={};
    for(int i=2; i<=1000000; i++)
    {
        arr[i]=i;
    }
    for(int i=2;i*i<=1000000;i++)
    {
        if(arr[i]==i)
        {
           for(int j=i*i; j<=1000000; j=j+i)
           {
               if(arr[j]==j)
               arr[j]=i;
           }
        }
    }
    int t;
    scanf("%d", &t);
    while(t--)
    {
        ans = 1 ;
        scanf("%d",&n);
        while(n>1)
        {
            p=arr[n];
            n=(n/arr[n]);
            while(arr[n]==p)
            {
                c++;
                n=n/p;
            }
            if((c%2)!=0)
                ans=ans*p;
            c=1;
        }

        printf("%d\n", ans);
    }

}
