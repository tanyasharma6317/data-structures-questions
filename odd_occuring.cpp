#include <bits/stdc++.h>
using namespace std;
 
int find_odd_occurrence(int arr[], int low, int high)
{
    if(low == high)
    {
        return low;
    }
    
    int mid = (low + high) / 2;
    
    if(mid & 1)
    {
        if(arr[mid] == arr[mid - 1])
        {
            return find_odd_occurrence(arr, mid+1, high);
        }
        else
        {
            return find_odd_occurrence(arr, low, mid);
        }
    }
    else
    {
        if(arr[mid] == arr[mid + 1])
        {
            return find_odd_occurrence(arr, mid+2, high);
        }
        else
        {
            return find_odd_occurrence(arr, low, mid);
        }
    }
}
int main(void)
{
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout<<A[find_odd_occurrence(A, 0, n-1)];
    return 0; 
}