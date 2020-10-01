import java.io.*;
import java.util.*;

public class spiral2 {

   public static void main(String[] args) throws Exception {
      
      Scanner sc= new Scanner(System.in);
      int n = sc.nextInt();
      int[][] arr = new int[n][n];

      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            arr[i][j] = sc.nextInt();
         }
      }

      int cnt = 0;
      int tne  = n * n;
      int minr = 0;
      int minc = 0;
      int maxr = n - 1;
      int maxc = n - 1;
      while(cnt < tne){
      
         for(int j = minc; j <= maxc && cnt < tne; j++){
            System.out.print(arr[minr][j] + " ");
            cnt++;
         } 
         minr++;

         for(int i = minr; i <= maxr && cnt < tne; i++){
            System.out.print(arr[i][maxc] + " ");
            cnt++;
         }
         maxc--;

         for(int j = maxc; j >= minc && cnt < tne; j--){
            System.out.print(arr[maxr][j] + " ");
            cnt++;
         }
         maxr--;

         for(int i = maxr; i >= minr && cnt < tne; i--){
            System.out.print(arr[i][minc] + " ");
            cnt++;
         }
         minc++;

      }
   }

}