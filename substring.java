import java.util.*;
public class substring{
    public static void main(String args[]){
    char str[]= {'a','b','c','d'};
    sub(str,str.length);
    }
    public static void sub(char str[], int n){
        for(int len=1;len<=n;len++){
            for(int i=0;i<n-len;i++){
                int j=len+i-1;
                for(int k=i;k<=j;k++){
                    System.out.print(str[k]);
                }
                System.out.println();
            }
        }


    }
}