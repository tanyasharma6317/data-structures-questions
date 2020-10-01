/*These three words will be read one at a time, in three separate line
The first word should be changed like all vowels should be replaced by %
The second word should be changed like all consonants should be replaced by #
The third word should be changed like all char should be converted to upper case
Then concatenate the three words and print them
For example if you print how are you then output should be h%wa#eYOU.*/
import java.util.Scanner;
public class stringtwist
{
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        String s1= sc.nextLine();
        String s2= sc.nextLine();
        String s3= sc.nextLine();
        String p1= "";
        String p2= "";
        String p3= "";
        char c;
        for(int i=0;i<s1.length();i++){
            c=s1.charAt(i);
            if(c == 'a' || c== 'e' || c == 'i' || c== 'o' || c=='u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                p1 = p1 + '%';
            }
            else{
                p1 = p1 + c;
            }
        }

        for(int i=0;i<s2.length();i++){
            c=s2.charAt(i);
            if(c == 'a' || c== 'e' || c == 'i' || c== 'o' || c=='u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                p2 = p2 + c;
            }
            else{
                p2= p2 + '#' ;
            }
        }
        p3= s3.toUpperCase();
        System.out.println(p1+p2+p3);
        
            
        }

    }
