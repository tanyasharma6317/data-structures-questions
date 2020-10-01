#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int hhtt(string str){
int h= (str[0]-48) * 10 +(str[1]-48);
int m= (str[3]-48) * 10 +(str[4]-48);
int required_time=0;
while(h%10!=m/10 || h/10!=m%10){
    ++m;
    if(m==60){
        m=0;
        ++h;
        required_time++;
    }  
    if(h==24){
        h=0;
    }
       ++required_time;
}
return required_time;
}
int main(){
string str;
getline(cin,str);
cout << hhtt(str) << endl;  
} 
