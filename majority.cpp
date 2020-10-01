#include<iostream>
#include<vector>
using namespace std;

int maj(vector<int> & nums)
{
  int cand= nums[0];
  int count=1;
  int n=nums.size();
  for(int i=0;i<n;i++)
  {
      if(nums[i]==cand)
      {
          count++;
      }
      else{
          count--;
          if(count==0)
          {
            cand=nums[i];
            count=1;
          }
          
      }
  }
  int count2=0;
  for(int i=0;i<n;i++)
  {
      if(nums[i]==cand)
      {
        count2++;
      }
      
  }
  if(count2>n/2)
  return cand;
  else
  {
      return -1;
  }
  
}
int main(int args, char **argv)
{
    vector<int> nums{3,3,5,7,3,7,3};
    cout<< maj(nums);
}
