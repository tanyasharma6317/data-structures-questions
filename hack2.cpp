#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool hack(long long target, long long current){
    if(target==current){
        return true;
    }
    if(current>target){
        return false;
    }
    else{
        if(hack(target, current*10))
        return true;
        if(hack(target, current*20))
        return true;
    }
    return false;
}
int main() {
    int test_cases;
    cin >> test_cases;
    for(int i=1;i<=test_cases;i++){
        int target;
        cin >> target;
       bool h=hack(target,1);   
       if(h)
       cout<< "yes";
       else{
           cout<< "no";
       }  
}
}


