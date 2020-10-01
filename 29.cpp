#include<iostream>
using namespace std;
void pos(int arr[], int n, int ele, int i)
{
     if(i==n)
     return;
     if(arr[i]==ele)
     cout<< i << " ";
     pos(arr,n,ele,i+1);


}
int main()
{
    int arr[]= {3,5,3,6,7,3};
    pos(arr,6,3,0);
}