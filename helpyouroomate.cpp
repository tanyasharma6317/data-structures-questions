#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a=n&(n-1);
    if(a==0)
        cout<<1<<endl;
    else
    {
        int ans=0;
        while(n>0)
        {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=n-1;
            ans++;
        }
        }
        cout<<ans<<endl;
    }
}
return 0;
}