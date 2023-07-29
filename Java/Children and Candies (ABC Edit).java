import java.util.Scanner;
 
public class Main 
{
	public static void main(String[] args) 
      {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int res = (n+1) * n / 2;
		System.out.println(res);
		input.close();
	}
}