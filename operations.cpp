#include<iostream>
using namespace std;
int op(int a, int b, int c){
    int operation;
 if(c==1 || c==2){
   operation= a+b;
 }
 else if(c==3){
  operation= a*b;
 }
 else{
     operation=a/b;
 }
 return operation;
}
int main(){
int a,b,c;
cin >> a >> b >> c;
cout << op(a,b,c);

}