#include <iostream>
#include<bits/stdc++.h>
# define mod 10001
using namespace std;
typedef long long ll;

int main() 
{
   // Try out your code here
  int n;
  cin >> n;
  int sum;
  int val=0;
  int avg;
  int a[10000];
  ll b[mod];
  for(int i=0;i<n;i++)
  {
    cin >> a[i];
    sum=sum+a[i];
  }
  b[0]=0;
  avg=sum/n;
  for(int i=0;i<n-1;i++)
    b[i+1]= a[i]+b[i]-avg;
  sort(b,b+n);
  int m=-b[n/2];
  for(int i=0;i<n;i++)
    val=val+ abs(b[i]+m);
    
  cout<< val;
  
    return 0;
}