import java.util.Scanner;
class Main
 {
 
	public static void main(String[] args)
  {
		Scanner input = new Scanner(System.in);
 
		int a = input.nextInt();
		int b = input.nextInt();
		int c = 0;
 
		while(1+c*(a-1) < b) 
                    c++;
 
		System.out.println(c);
	}
}
