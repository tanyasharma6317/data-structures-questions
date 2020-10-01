public class excel
{
    public static void main(String[] args)
    {
       String s= "AAA";
       System.out.print(exceltonumber(s));
    }
    private static int exceltonumber(String s)
    {
        int ans=0;
        int pow=1;
        int n=s.length();
        for(int i=n-1;i>=0;i--)
        {
            ans= ans+ (s.charAt(i)-64)*pow;
            pow=pow*26;  
        }  
        return ans;    
    }
}
