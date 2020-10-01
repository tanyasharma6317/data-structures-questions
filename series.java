import java.util.Scanner;
public class series
{
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int n =sc.nextInt();
        int a=1;
        int b=1;
        for(int i=1;i<=n;i++){
           if(i%2!=0){
                 a=a*2;
           } 
           else {
              b=b*3;
           }
           
        }
        if(n%2!=0){
            System.out.print(n + "th number in series is " + a);
        }
        else{
            System.out.print(n + "th number in series is " + b);
        }
    }
    

}
