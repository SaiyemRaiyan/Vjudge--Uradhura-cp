import java.util.Scanner;

 class Main
 {
    
    public static void main(String[] args) 
    {
      Scanner input = new Scanner(System.in);

	    int n = input.nextInt();
	    for(int i=0; i<n; i++)
	   {
            
	          int a = input.nextInt();
	          int b = input.nextInt();
	          int c = input.nextInt();
	       if((a>b && a<c) || (a<b && a>c))
               {
	           System.out.println(a);
	       }
               else if((b>a && b<c) || (b>c && b<a))
               {
	           System.out.println(b);
	       }
               else if((c>a && c<b) ||  (c<a && c>b))
               {
	           System.out.println(c);
	       }
	    }
	}
}