#include<iostream>
using namespace std;
// void print(int n)
// {
//     if(n==0)
//     return;
//     print(n-1);
//     cout<< n;
// }

void print_rev(int n)
{
    if(n==0)
    return;
    cout<<n;
    print_rev(n-1);  
}

int main()
{
    //print(5);
    print_rev(5);
}
