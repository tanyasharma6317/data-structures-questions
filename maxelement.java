import java.util.*;
public class maxelement
{
    public static void main(String[] args)
    {
        int arr[]= inptarr();
        display(arr);
        int max= largest(arr);
        
        System.out.println("Maximum element array is " + max);
        
    }
    public static int largest(int[] arr)
        {
            int mx= arr[0];
            for(int i=0;i<arr.length;i++)
            {
                if(mx<arr[i])
                {
                    mx=arr[i];
                }
            }
            return mx;
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


