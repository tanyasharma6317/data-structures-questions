import java.io.*;
import java.util.*;

public class stair2 {

    public static void main(String[] args) throws Exception {
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        System.out.println(printStairPaths(n, ""));

    }

    public static int printStairPaths(int n, String path) {
        int count=0;
         if(n<0)
         return 0;
         if(n==0){
            System.out.println(path);
            count++;
         }
         count+=printStairPaths(n-1, path + 1);
         count+=printStairPaths(n-2, path + 2);
         count+=printStairPaths(n-3, path + 3);
         
        return count;
    }

}