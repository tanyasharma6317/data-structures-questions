//break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var
//Write a program to find if the given word is a keyword or not
import java.util.Scanner;
public class keyword
{
    public static void main(String args[]){
        int flag=0;
        Scanner sc= new Scanner(System.in);
        String input= sc.nextLine();
    String str[]= {"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
    for(int i=0;i<str.length;i++)
        {
           if(str[i].equals(input)){
            flag=1;
            break;
           }
        
        }
        if(flag==1)
        System.out.println("It is keyword");
        else
        System.out.println("It is not keyword");

        
    }
    }
