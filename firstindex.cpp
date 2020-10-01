#include<iostream>
using namespace std;

int first_idx1(int arr[], int n, int x,int i)
{
    if(i==n)
    return -1;
    if(arr[i]==x)
    {
        return i;
    }
    return first_idx1(arr,n,x,i+1);


}
int main()
{
    int arr[]= {2,6,5,3,6,3};
    cout<< first_idx1(arr,6,3,0);

}
