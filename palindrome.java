import java.util.*;
public class palindrome {
    public static void main(String args[]){
    String str= "ghhs";
    pal(str);

    }
    public static void pal(String str){
        int s= 0;
        int e= str.length()-1;
        while(s<e){
            if(str.charAt(s)!=str.charAt(e)){
                System.out.println("Not Palindrome");
                return;
            }
            s++;
            e--;
        }
        System.out.println("palindrome");
    }
    
}