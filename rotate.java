public class rotate
{
    public static void main(String args[])
    {
       int arr[]={1,2,3,4,5,6,7,8};
       int d=3;
       reverse(arr,0,arr.length-d-1);
       reverse(arr,arr.length-d,arr.length-1);
       reverse(arr,0,arr.length-1);
       for(int val: arr)
       {
           System.out.print(val + " ");
       }
    }
    public static void reverse(int arr[], int start, int end)
    {
        while(start<end)
        {
            //swap(start, end);
            int temp=arr[start];
            arr[start]= arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    
}