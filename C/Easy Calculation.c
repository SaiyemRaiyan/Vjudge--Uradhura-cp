#include<stdio.h>
#include<math.h>

int main()
{
    int t,m; 
     double a,b,c,x1,x2;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%lf%lf%lf",&a,&b,&c);

        x1 = -1;

        x2 = c/a;
        
        m = 6;

        while(x2!=x1 && m--)
        {
            x1 = x2;
            x2 = x1 - ( a*x1 + b*sin(x1) - c )/ ( a + b*cos(x1) );
        }

        printf("%lf\n",x2);
    }

    return 0;
}