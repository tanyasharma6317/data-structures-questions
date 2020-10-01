//0, 0, 2, 1, 4, 2, 6, 3, 8, 4, 10, 5, 12, 6, 14, 7, 16, 8
import java.util.Scanner;
public class series3
{
    public static void main(String args[]){
    Scanner sc= new Scanner(System.in);
    int n= sc.nextInt();
    int a=0;
    int b=0;
    for(int i=1;i<n;i++){
        if(i%2!=0)// odd
        {
           a=a+2;
    
        } 
        else{   //even
            b=a/2;
    
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