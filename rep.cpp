#include<iostream>
#include<string.h>
//#include<bits/stdc++.h> 
using namespace std;
string replace(string str, char s1, char s2){
   for(int i=0;i<str.length();i++){
       if(str[i]==s1){
           str[i]=s2;
       }
       else if(str[i]==s2){
           str[i]=s1;
   }
  

}
 cout << str;
}
int main(){
    string s;
    cin>> s;
    char a;
    cin >> a;
    char b;
    cin >> b;
    replace(s,a,b);
    return 0;

}