//Find the 15th term of the series? 0,0,7,6,14,12,21,18, 28
import java.util.Scanner;
public class series2
{
    public static void main(String args[]){
    Scanner sc= new Scanner(System.in);
    int n= sc.nextInt();
    int a=0;
    int b=0;
    for(int i=1;i<n;i++){
        if(i%2!=0)// odd
        {
           a=a+7;
    
        } 
        else{   //even
            b=b+6;
    
        }
    }
      
    if(n%2!=0)
    {
        System.out.print(n + "th number in series is " + a);
    } 
    else{
        System.out.print(n + "th number in series is " + b);
    }
    
}
}