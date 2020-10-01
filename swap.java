public class swap
{
    public static void main(String[] args)
    {
        int one[]={33, 60,90};
        System.out.println(one[0] + " "  + one[2]);
        System.out.println("After swap");
        swap(one, 0, 2);
        System.out.println(one[0] + " " + one[2]);


    }
    private static void swap(int arr[], int i, int j )
    {
        int temp= arr[i];
        arr[i]= arr[j];
        arr[j]= temp;
    }
}
