#include<iostream>
using namespace std;
// bool isSorted(int arr[], int n)
// {
//     if(n==0 || n==1)
//     {
//         return true;
//     }
//     if(arr[0]>arr[1])
//     return false;
//     bool s= isSorted(arr+1, n-1);
//     return s;

    
// }

bool isSorted(int arr[], int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    
    bool s= isSorted(arr+1, n-1);
    if(!s)
    return false;
    if(arr[0]>arr[1])
    return false;
    else
    {
        return true;
    }
    

    
}
int main()
{
    int arr[]= {5,8,3,2,1};
    if(isSorted(arr,5))
    {
        cout<< "sorted";
    }
    else
    {
        cout<< "Not sorted";
    }
    
}