import java.util.*;
class anagram2
{
  public static void main(String args[])
  {
    //Try out your code here
    Scanner sc= new Scanner(System.in);
    String s1= sc.nextLine();
    String s2= sc.nextLine();
    int freq[128] =  { 0 }; 
    for(int i=0;i<s1.length();i++){
      freq[s1.charAt(i)]++;
    }
    for(int i=0;i<s2.length();i++){
      freq[s2.charAt(i)]--;
    }
    for(int i=0;i<128;i++){
      if(freq.charAt(i)!=0){
        System.out.println("Not anagrams");
        return;
      }
    }
    System.out.println("Anagram"); 
  }
}