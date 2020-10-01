#include<iostream>
using namespace std;
void duplicates(char arr[])
{
  if(arr[0]=='\0')
  {
      return;
  }
  if(arr[0]!=arr[1])
  {
      duplicates(arr+1);   
  }
  else
  {
     for(int i=0;arr[i]!='\0';i++)
      {
          arr[i]=arr[i+1];
      } 
      duplicates(arr); 
  }    
}
int main()
{
    char arr[]= "aabcdeef";
    cout<< arr << endl;
    duplicates(arr);
    cout<< arr << endl;
    return 0;
}
