#include<iostream>
using namespace std;
int sum_array( int arr[], int n)
{
    if(n==0)
    return 0;
    return arr[0] + sum_array(arr+1, n-1);
}
int sum_array1( int arr[], int n, int i)
{
    if(n==i)
    return 0;
    return arr[i] + sum_array1(arr, n,i+1);
}
int main()
{
    int arr[]={2,3,4,5,6};
    // cout<< sum_array( arr,5);
    cout<< sum_array1(arr,5,0);
}
