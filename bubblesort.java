public class bubblesort
{
    public static void main(String[] args)
    {
        int arr[]={20,10,18,30,-3};
        int jc=1;
      while(jc <= arr.length-1)
      {
        for(int i=0;i<arr.length-jc;i++)
        {
            if(arr[i]>arr[i+1])
            {
              swap(arr,i,i+1);
            }
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
        arr[i]= arr[j];
        arr[j]= temp;
    }
}
