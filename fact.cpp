#include<iostream>
using namespace std;
int fact(int n)
{
	cout<< n<< endl;
    if(n==0)
    {
        return 1;
    }
    int smallAns= fact(n-1);
    return n*smallAns;
}
int main()
{
    int n;
    cin>> n;
    int s= fact(n);
    cout<< s<< endl;
    return 0;
}
