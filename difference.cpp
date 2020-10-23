#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int diff(int num1,int num2){
    int sum1=0;
    int sum2=0;
for(int i=1;i<=num2;i++){
if(i%num1==0){
sum1+=i;
}
else{
    sum2+=i;
}
}
return abs(sum1-sum2);
}
int main(){
    int num1,num2;
    cin >> num1;
    cin >> num2;
    cout<< diff(num1,num2);
}