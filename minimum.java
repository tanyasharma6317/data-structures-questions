import java.util.*;
public class minimum
{
    public static void main(String[] args)
    {
        int arr[]= inptarr();
        display(arr);
     
        int min= smallest(arr);
      
        System.out.println("Minimum element array is " + min);
    }
    
        public static int smallest(int[] arr)
        {
            int mn= arr[0];
            for(int i=0;i<arr.length;i++)
            {
                if(mn>arr[i])
                {
                    mn=arr[i];
                }
            }
            return mn;
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


