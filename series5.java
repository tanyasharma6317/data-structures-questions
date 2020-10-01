//1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17
import java.util.Scanner;
public class series5{
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();

        
    }
    public static void fibo(int n){
        int a=1;
        int b=1;
        int d=2;
        for(int i=1;i<n;i++){
            if(i%2!=0)
            {
               int c=a+b;
               a=b;
               b=c; 
               System.out.print(a);
            }
        }
    }
    public static void prime(int n){
        
    }
        
}