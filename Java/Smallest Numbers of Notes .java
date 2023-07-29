import java.util.Scanner;
class Snum
{
      public static void main(String args[])
{
         Scanner input=new Scanner(System.in);
     int T=input.nextInt();
     for(int i=0; i<T; i++)
    {
        int n=input.nextInt();
        int a[]={100,50,10,5,2,1};
        int s=0,c=0;
      
    while(n>0)
    {
        s+=n/a[c];
        n=n%a[c];
         c++;
     }
          System.out.println(s);
  }
}
}