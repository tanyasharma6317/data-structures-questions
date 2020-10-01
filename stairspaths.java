import java.io.*;
import java.util.*;

public class stairspaths {

    public static void main(String[] args) throws Exception {
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        ArrayList<String> paths= getStairPaths(n);
        System.out.println(paths);
    }
    public static ArrayList<String> getStairPaths(int n) {
        if(n==0){
         ArrayList<String> bres=  new ArrayList<>();
         bres.add("");
         return bres;
        }
         else if(n<0){
             ArrayList<String> bres=  new ArrayList<>();
             return bres;
         }
        ArrayList<String> pathsp1= getStairPaths(n - 1);
        ArrayList<String> pathsp2= getStairPaths(n - 2);
        ArrayList<String> pathsp3= getStairPaths(n - 3);
        ArrayList<String> paths= new ArrayList<>();
        for(String paths1: pathsp1)
        {
            paths.add(1 + paths1);
        }
        for(String paths2: pathsp2)
        {
            paths.add(2 + paths2);
        }
        for(String paths3: pathsp3)
        {
            paths.add(3 + paths3);
        }
        return paths;
        
    }

}