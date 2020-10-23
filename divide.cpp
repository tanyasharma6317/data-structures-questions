#include<iostream>
using namespace std;
int divide(int num1,int num2,int num3){
    if(num1%num2==0 && num1%num3==0){
    return 1;
    }
    return 0;
}
int main(){
    int num1,num2,num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    int n=divide(num1,num2,num3);
    if(n==1){
        cout<< "True";
    }
    else{
        cout << "false";
    }
    return 0;
}