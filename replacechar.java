import java.util.*;
class replacechar{
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        String str= sc.nextLine();
        char a = sc.next().charAt(0);
        char b = sc.next().charAt(0);
        Replace(str,a,b);

    }
    public static String Replace(String str,  char ch1, char ch2){
        char []arr= str.toCharArray();
    for(int i=0;i<str.length();i++){

          
          if(arr[i]==ch1){
              arr[i]= ch2;
          }
          else if(arr[i]==ch2){
              arr[i]=ch1;
          }


      }
      return String.valueOf(arr);

    }
}
