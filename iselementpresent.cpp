#include<iostream>
using namespace std;
bool is_present(int arr[], int n, int ele)
{
    if(n==0)
    return false;
    if(ele==arr[0])
    return true;
    bool b = is_present(arr+1,n-1,ele);
    return b;
}
int main()
{
    int arr[]= {1,2,5,6,8};
    if(is_present(arr,5,3))
    {
       cout<< "Found";
    }
    else
    {
        cout<< "Not found";
    }  
}
