
public class binsearch
{
    public static void main(String[] args)
    {
        int arr[]= {3,7,9,10,26};
        int n=2;
        int idx= b_search(arr, n);
        System.out.println(idx);
    }
        private static int b_search(int []arr, int n)
        {
            int low=0;
            int high=arr.length-1;
            
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(n<arr[mid]){
                    high=mid-1;
                }
                else if(n>arr[mid]){
                    low=mid+1;
                }
                else
                return mid;
                
            }
            return -1;  
        }         
    }
