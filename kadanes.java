public class kadanes
{
    public static void main(String[] args)
    {
        int arr[]={2,3,-6,1,2,3,-4,5};
        int csm= arr[0];
        int osm=arr[0];
        for(int i=1;i<arr.length;i++)
        {
           if(csm<0)
           {
               csm=arr[i];
           }
           else
           {
             csm+=arr[i];
           }
           if(csm>osm)
           {
               osm=csm;
           }
        }
        System.out.print(osm + " ");

    }
}