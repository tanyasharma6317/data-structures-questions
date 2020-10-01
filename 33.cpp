#include<iostream>
using namespace std;
bool pal(int arr[],int n, int i, int j)
{
  if(i>j)
  return true;
  if(arr[i]==arr[j])
  {
      return pal(arr,n,i+1,j-1);
  }
  return false; 
}
int main()
{
  int arr[]= {1,3,2,2,3,1};
  if(pal(arr,6,0,5))
  {
      cout<< "true";
  }
  else
  {
      cout<< "false";
  }
}
