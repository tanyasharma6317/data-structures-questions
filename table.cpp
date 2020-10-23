#include<iostream>
using namespace std;
int main(){
    int t;
    int sum=0;
int n;
cin >> n;
for(int i=1;i<=10;i++){
  t=i*n;  
  cout << t << endl;
  sum+=t;
}
cout<< sum;
}