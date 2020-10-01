/*Given a maximum of 100 digit numbers as input, find the difference between the sum of odd and even position digits.
Case 1
Input: 4567
Expected Output: 2
*/
import java.util.Scanner;
import java.lang.*;
public class oddlyeven{
    public static void main(String args[]){
        int odd=0;
        int even=0;
        int i=0;
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        while(n!=0){
            if(i%2!=0){
                odd=odd+n%10;
                n=n/10;
                i++;          
            }
            else{
                even= even+n%10;
                n=n/10;
                i++;

            }
        }
        System.out.println( Math.abs(even-odd));
        //System.out.println("Math.abs(" + x + ")=" + Math.abs(x));
        

    }
}
