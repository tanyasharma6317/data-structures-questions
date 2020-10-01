#include<iostream>
using namespace std;
int mul(int m, int n)
{
    if(n==0)
    {
        return 0;
    }
    int mt= mul(m,n-1);
    return mt+m;
}
int main()
{
    cout<< mul(5,3);
}

