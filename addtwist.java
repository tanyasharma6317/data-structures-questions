import java.util.Scanner;
public class addtwist{
    public static void main(String args[]){
    Scanner sc= new Scanner(System.in);
    int n1= sc.nextInt();
    float n2= sc.nextFloat();
    float s= sum(n1,n2);
    System.out.println(s); 

    }
    public static int sum(int n1, float n2){
      float add = n1+n2;
      return add;
    }
}