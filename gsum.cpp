#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double geometric_sum(int k)
{
    if(k==0)
    {
        return 1;
    }
    double n=geometric_sum(k-1);
    return n+ 1.0/ pow(2,k);
}
int main()
{
    cout<<geometric_sum(3);
}