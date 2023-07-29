import java.util.Scanner;
 
public class Main
{
	public static void main(String[] args) 
        {
		Scanner input=new Scanner(System.in);
		double a= input.nextInt();
		System.out.println(Math.pow(a/3, 3));
	}
}