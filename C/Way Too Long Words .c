#include<stdio.h>
int main()
{
    int n,k;
    char ch[3000];
          scanf("%d", &n);

   for(int i=1; i<=n; i++)
   {
      scanf("%s",&ch);

      int  j = strlen(ch);
         if(j>10)
     {

    printf("%c", ch[0]);
    printf("%d", j-2);
    printf("%c\n", ch[j-1]);

     }
   else
         printf("%s\n",ch);
   }
      return 0;
}
