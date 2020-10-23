#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string ReplaceCharacter(string str,char ch1,char ch2){
if(str.empty()){
    cout << "-1";
}
for(int i=0;i<str.size();i++){
if(str[i]==ch1){
    str[i]=ch2;
}
else if(str[i]==ch2){
    str[i]=ch1;
}
}
return str;
}
int main(){
    string str;
    cin >> str;
    char ch1,ch2;
    cin >> ch1;
    cin >> ch2;
    cout<< ReplaceCharacter(str,ch1,ch2);
}