#include<iostream>
using namespace std;
void remove(char arr[])
{
  if(arr[0]=='\0')
  {
      return;
  }
  if(arr[0]!='a')
  {
      remove(arr+1);   
  }
  else
  {
     for(int i=0;arr[i]!='\0';i++)
      {
          arr[i]=arr[i+1];
      } 
      remove(arr); 
  }    
}
int main()
{
    char arr[]= "abcadefab";
    cout<< arr << endl;
    remove(arr);
    cout<< arr << endl;
    return 0;
}
