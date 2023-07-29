#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, x, y, i, j, sum, count=0;
    int a[1000],b[1000];
    scanf("%d%d",&sum,&N);

    for(i=0; i<N; i++)
    {
        scanf("%d%d", &x, &y);

        a[i] = x;
        b[i] = y;
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<N-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
                swap(b[j], b[j+1]);
            }
        }
    }

    for(i=0; i<N; i++)
    {
        if(sum > a[i])
        {
            count++;
        }
        sum += b[i];
    }

    if(count == N)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}