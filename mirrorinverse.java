public class mirrorinverse
{
    public static void main(String[] args)
    {
        int arr[]= {3,4,2,0,1};
        for(int i=0;i<arr.length;i++)
        {
            int val= arr[i];
            if(arr[val]!=i)
            {
                System.out.print("No");
                return;
            }
            
        }
        System.out.print("Yes");
    }
}