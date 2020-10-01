import java.util.*;
import java.io.*;


public class anagrams {

    static boolean isAnagram(String a, String b) {
        // Complete the function
        a= a.replace(" ", "").toLowerCase();
        b= b.replace(" ", "").toLowerCase();
        char x[]= a.toCharArray();
        char y[]= b.toCharArray();
        Arrays.sort(x);
        Arrays.sort(y);
        if(Arrays.equals(x,y))
          return true;
        else
            return false;
    }

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
