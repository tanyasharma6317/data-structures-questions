public class selection
{
   public static void main(String args[])
   {
       int arr[]= {10,15,-1,2,7};
       int jc=1;
       while(jc<=arr.length-1)
       {
          for(int i=jc;i<arr.length;i++)
          {
             if(arr[i]<arr[jc-1])
             swap(arr,i, jc-1);
          }
          jc++;
       }
       for(int val: arr)
       {
          System.out.println(val + " ");
       }
      }
       private static void swap(int arr[], int i, int j)
       {
          int temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
       }
   }
