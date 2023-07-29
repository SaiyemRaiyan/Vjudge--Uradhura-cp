import java.util.Scanner;

public class Main
{

       public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int arr[] = new int[n];
           for(int i=0; i<n; i++)
        {
            arr[i] = input.nextInt();
        }
 
           for(int i=arr.length-1; i>=0; i--)
        {
            System.out.print(arr[i] + " ");
        }
    }
 
}