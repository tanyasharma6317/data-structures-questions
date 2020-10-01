#include<iostream>
using namespace std;

int length(char arr[], int n)
{
    if(n==0)
    {
        return 0;
    }
    return 1+ length(arr,n-1); 


}
int length1(char arr[])
{
    if(arr[0] == '\0')
    return 0;
    return 1+ length1(arr+1);



}
int main()
{
    char arr[]= "abcgh";
    cout<< length(arr,5);
    //cout<<length1(arr);
    return 0;  


    
}

