#include<iostream>
#include<vector>
using namespace std;
// by using vector
void store(int arr[], int n, int ele, int i, vector<int> &ans)
{
  if(i==n)
  {
      return;
  }
  if(arr[i]==ele)
  {
    ans.push_back(i);
  }
  store(arr,n,ele,i+1,ans);
  
}
// by using array
void store(int arr[], int n, int ele, int i, int arr1[], int j)
{
  if(i==n)
  {
      return;
  }
  if(arr[i]==ele)
  {
    arr1[j]=i;
    store(arr,n,ele,i,arr1,j+1);
  }
  store(arr,n,ele,i+1,arr1,j);
  
}

int main()
{
    //int arr[]= {2,3,4,3,6,3};
    int arr1[]= {};
    store(arr1, 6, 3,0,arr1,0);
    //for(int i=0;i<arr1.size();i++)
    {
        cout<< arr1[i] << endl;
    }
    return 0;

}

