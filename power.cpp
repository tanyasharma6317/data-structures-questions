#include<iostream>
using namespace std;
int power(int x, int n)
{
    
    if(n==0)
    return 1;
    int p= power(x, n-1);
    return x*p;
}
int main()
{
    int x,n;
    cout<< "Enter the value of x and n" << endl;
    cin >> x >> n;
    cout<<power(x, n);
}
