import java.io.*;
import java.util.*;

public class coinchange1 {

    public static void coinChange(int i, int[] coins, int amtsf, int tamt, String asf){
        // write your code here
        if(i==coins.length){
            if(amtsf==tamt){
                System.out.println(asf);
            }
            return;
        }
        coinChange(i+1,coins,amtsf+coins[i],tamt,asf+ coins[i]);
        coinChange(i+1,coins,amtsf+0,tamt,asf);
 
        }
    
    public static void main(String[] args) throws Exception {
      int n=5;
      int coins[]= new int[n]; 
      coinChange(0, coins, 0, tamt, "");
    }
}