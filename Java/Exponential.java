import java.util.Scanner;
class Main 
{
	public static void main(String[] args)
     {
		Scanner input = new Scanner(System.in);
		int a = input.nextInt();
		int maximum = 1;
		
		for(int i = 2;  i*i<=a; i++)
           {
	            int n = i;

			while(n <= a)
                       {
				maximum = Math.max(maximum, n);
				n *= i;
			}
		}

		System.out.println(maximum);
	}
}
