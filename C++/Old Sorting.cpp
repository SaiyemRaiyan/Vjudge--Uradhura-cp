#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n;
	int a[1000];
	int o;
	int t;

	scanf("%d", &t);
	for (int cs = 1; cs <= t; cs++)
               {
		scanf("%d", &n);
		o = 0;

		for (int i = 1; i <= n; i++) {
			scanf("%d", a + i);
		}

		for (int i = 1; i <= n; i++) {
			if(a[i] != i)
                           {
				
				for (int j = i + 1; j <= n; j++) 
                               {
					if(a[j] == i) {
						swap(a[j], a[i]);
						o
++;
						break;
					}

				}
			}

		}

		printf("Case %d: %d\n", cs, o);

	}


}

			