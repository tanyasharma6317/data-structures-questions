import java.util.Scanner;
public class prime
{
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        if(n<0){
            System.out.print("Please enter a positive number");
        }
        else{
            prime(n);
        }
            
        }
        public static void prime(int n){
            int c=0;
            for(int i=2;i<n;i++){
                if(n%i==0){
                    ++c;
                }
               
            }
            if(c>=1){
                System.out.print(" Not Prime");
            }
            else{
                System.out.print(" Prime");
            }
        }

    }    
    
