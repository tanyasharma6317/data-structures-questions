#include<iostream>
using namespace std;
int last_idx(int arr[], int n, int ele, int i)
{
    if(i==-1)
    return 0;

    if(arr[i]==ele)
    return i;
    return last_idx(arr,n,ele,i-1);

}
int last_idx1(int arr[], int n, int ele)
{
    if(n==0)
    return 0;

    if(arr[n-1]==ele)
    return n-1;
    return last_idx1(arr,n-1,ele);

}
int main()
{
    int arr[]= {3,5,6,3,3,2};
    //cout<< last_idx(arr,6,3,5);
    cout<< last_idx1(arr,6,3);

}