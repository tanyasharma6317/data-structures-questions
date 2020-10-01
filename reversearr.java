public class reversearr{
    public static void main(String[] args)
    {
        int arr[]= {3,6,9,5,2};
        int beg=0;
        int end=arr.length-1;
        while(beg<end)
        {
            swap(arr,beg,end);
            beg++;
            end--;
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