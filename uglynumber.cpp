#include<bits/stdc++.h>
using namespace std;
int main
{
  int t,n;
  cin >> t;
  for(int i=1;i<=t;i++){
    cin >> n;
    cout<< getNthuglyNo(n);
  }
}

int maxDivide(int a, int b) 
{ 
  while (a%b == 0) 
   a = a/b;  
  return a; 
}     

int isUgly(int no) 
{ 
  no = maxDivide(no, 2); 
  no = maxDivide(no, 3); 
  no = maxDivide(no, 5); 
    
  return (no == 1)? 1 : 0; 
}     
  
int getNthUglyNo(int n) 
{ 
  int i = 1;  
  int count = 1;  

  while (n > count) 
  { 
    i++;       
    if (isUgly(i)) 
      count++;  
  } 
  return count;
}
