#include <iostream>
using namespace std;

int main() 
{
   // Try out your code here
  int n;
  string s;
  cin >> n;
  cin >> s;
  int z= n;
  int l= s.length();
  bool arr[n];
    for(int i=0;i<n;i++)
    {
      arr[i]=true;
    }
  int i=0; 
  int j=0;
  while(n!=1){
    if(arr[i]==true)
    {
      if(s[j]=='y'){
        arr[i]= false;
        n--;
        j++;
      }
      else
        j++;
    }
    i++;
    if(i>=z){
      i=0;
    }
    if(j>=l)
    {
      j=0;
    }
    }
  for(int i=0;i<z;i++){
    if(arr[i]==true)
      cout << i+1;
  }
    return 0;
}