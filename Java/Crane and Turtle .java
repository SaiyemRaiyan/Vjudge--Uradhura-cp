import java.util.Scanner;
 class Main 
{
   public static void main(String[] args)
   {
         Scanner input=new Scanner(System.in);
      int a=input.nextInt();
      int b=input.nextInt();
           if(b%2!=0) 
            System.out.println("No");
     else 
          {
                if(b>=a*2 && b<=a*4)
                    System.out.println("Yes");
                 else
                      System.out.println("No ");
           }
   }
}