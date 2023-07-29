import java.util.Scanner;
  class Main {
 
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		int n=input.nextInt();
	          long sum=1;
		for(int i=1; i<=n; i++)
		{
			sum=sum*i;
			sum%=1000000007;
		}
		System.out.println(sum);
	}
}