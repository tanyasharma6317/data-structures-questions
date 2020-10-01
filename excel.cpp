#include<iostream>
using namespace std;
int exceltonumber(string s)
{
    int ans=0;
    int n=s.size();
    long long pow=1;
    for(int i=n-1;i>=0;i--)
    {
        ans= ans+ (s[i]-64)*pow;
        pow=pow*26;
    }
    return ans;
}
int main()
    {
       string s= "BCA";
       int p= exceltonumber(s);
       cout<< p;
    }
