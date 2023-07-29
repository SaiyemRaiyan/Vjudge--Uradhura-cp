import java.util.Scanner;

 class Main
{

 public static void main(String[] args) 
{

        Scanner input = new Scanner(System.in); 
        int n = input.nextInt(); 
        for(int i=0; i<n; i++) 
        {
            int x = input.nextInt(); 
            int fact=1;                
            for (int j=x; j>1; j--)
            { 

                fact = fact*j;

            }

            System.out.println(fact);
        }
 
    }
 }