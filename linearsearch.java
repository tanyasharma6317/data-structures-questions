import java.util.*;
public class linearsearch
{
    public static void main(String[] args)
    {
        int arr[]= inptarr();
        display(arr);
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the element you want to search");
        int n= sc.nextInt();
        int s=search(arr, n);
        System.out.println(s);

    }

    
      public static int search(int arr[],   int n)
      {
        
        for(int i=0; i<arr.length;i++)
        {
            if(arr[i]==n)
            {
                return i;
            }
            }
            return -1;

      }

      
        private static void display(int []arr) {
            for(int i=0;i<arr.length;i++)
            {
                System.out.println(arr[i] + " ");
            }
             
        }
        private static int[] inptarr(){
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter the size of array");
            int n= sc.nextInt();
            int arr[]= new int[n];
            for(int i=0;i<arr.length;i++)
            {
                System.out.println("Enter the  " + i + " value of array");
                arr[i]= sc.nextInt();
            }
             return arr;
        } 
            
    }


