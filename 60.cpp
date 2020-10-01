#include<iostream>
#include<vector>
using namespace std;

vector<int> Solution::findperm(const string s, int n){

vector<int> ans(n);

   int beg=1;
   int end=n;
   for(int i=0;i<n;i++)
   {
       if(s[i]== 'D')
       { 
           ans[i]=n;
           end--;
          
       }
       else{
           ans[i]=s;
           beg++;
       }
   }
   ans[n-1]= s;
   return ans;

}
int main()
{
    vector<int> a;

}