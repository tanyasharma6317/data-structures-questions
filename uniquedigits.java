//Write a program to find the count of numbers which consists of unique digits
import java.util.Scanner;
import java.util.Arrays;
public class uniquedigits{
    public static void main(String args[]){
    Scanner sc= new Scanner(System.in);
    int low= sc.nextInt();
    int hi= sc.nextInt();
    printunique(low,hi);
    }
    public static void printunique(int low, int hi){
        int count=0;
        for(int i= low;i<=hi;i++){
            int num=i;
            Boolean vis[] = new Boolean[10];
            Arrays.fill(vis[num%10], Boolean.FALSE);
            while(num){
            if(vis[num%10]){
                break;
            }
            Arrays.fill(vis[num%10], Boolean.TRUE);
            num=num/10;
            }
            if(num==0){
                count++;
            }
        }
        if(count>0){
            System.out.println(count);
        }
        else{
            System.out.println("No unique digits");
        }
    }
}