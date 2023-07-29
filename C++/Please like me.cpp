#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
  {
        int L,D,S,C;
        scanf("%d %d %d %d", &L, &D, &S, &C);

        if (S*pow((C+1), D-1) >= L)
        {
            printf("ALIVE AND KICKING\n");
        }
        else
        {
            printf("DEAD AND ROTTING\n");
        }
    }

    return 0;
}