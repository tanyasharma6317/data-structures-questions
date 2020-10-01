#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
string removeDuplicates(string A, int k) {
            stack<pair<char,int> > s;
            for(int i=0;i<A.size();i++)
            {
                if(s.empty() || A[i] != s.top().first)
                {
                    s.push(make_pair(A[i], 1));
                }
                else   
                {
                    s.top().second++;
                    int count= s.top().second;
                    if(count==k)
                    {
                        s.pop();
                    }
                    
                }  
            }
    
            string ans= "";
            while(!s.empty())
            {
                int count=s.top().second;
                while(count--)
                {
                    ans.push_back(s.top().first);
                } 
               s.pop();
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
int main()
{
    string s= {"deeedbbcccbdaa"};
    int k=3;
    cout<< removeDuplicates(s, k);

}

