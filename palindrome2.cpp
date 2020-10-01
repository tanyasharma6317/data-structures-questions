#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
bool check(string a, int s, int e)
{
    while(s<=e)
    {
        if(a[s]!=a[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
bool pal(string s)
{
    int n=s.size();
    int st=0;
    int en=n-1;
    while(st<=en)
    {
        if(s[st]!=s[en])
        {
            //two cases
            if(check(s, st+1, en) || check(s,st,en-1))
            {
                return true;
            }
            else
            {
            return false;
            }
            
        }
        st++;
        en--;
    }
    return true;
}
int main()
{
    string s= {"abca"};
    cout<< pal(s);
}