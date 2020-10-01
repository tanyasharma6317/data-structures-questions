#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
string remove_duplicates(string A)
{
    /*stack<char> s;
    for(int i=0;i<A.size();i++)
    {
        if(s.empty() || A[i]!=s.top())
        {
            s.push(A[i]);
        }
        else{
            s.pop();
        }
    }
    string ans= "";
    while(!s.empty()){
      ans.push_back(s.top());
      s.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;*/

    int stackptr=-1;
    for(int i=0;i<A.size();i++)
     {
        if(stackptr==-1 || A[i]!= stackptr)
        {
            stackptr++;
            A[stackptr]=A[i];
        }
        else
        {
            stackptr--;
        }
        
     }
     string ans="";
     for(int i=0;i<=stackptr;i++)
     {
        ans.push_back(A[i]);
     }
     return ans;
    
}
int main()
{
    string A= {"abbade"};
    cout<< remove_duplicates(A);
}