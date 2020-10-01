#include<iostream>
#include<vector>
#include<bits/stdc++.h> 
using namespace std;
string commonprefix(vector<string> & strs)
 {
    string ans = " ";
    string s= *min_element(strs.begin(),  strs.end());
    for(int i=0;i<s.size();i++)
    {
      for(int j=0;j<strs.size();j++)
      {
          if(s[i]!=strs[j][i])
          {
              return ans;
          }
      }
      ans.push_back(s[i]);
    }
    return ans;
 }


int main(int args, char **argv)
{
    vector<string> strs{"abcdef", "abcde", "abcd", "abc"};
    cout<< commonprefix(strs);
 
 }