#include<iostream>
using namespace std;
void replace(char arr[])
{
  if(arr[0]=='\0')
  {
      return;
  }
  if(arr[0]=='a')
  {
      arr[0]= 'x';
    
  }
  replace(arr+1);
}
int main()
{
    char arr[]= "abcadefab";
    cout<< arr<< endl;
    replace(arr);
    cout<< arr << endl;
}
