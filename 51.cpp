#include<iostream>
#include<vector>
using namespace std;
    int getindex(vector<int>& nums, int target, bool getfirst)
    {
        int s=0;
        int e=nums.size()-1;
        int mid=s+ (e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            if(nums[mid]==target)
            {
              ans=mid;
                if(getfirst)
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
            else if(nums[mid]<target)
            {
              s=mid+1;
            }
            else
              e=mid-1;  
         }
        return ans;
    }
      vector<int> searchRange(vector<int>& nums, int target) {
      vector<int> v(2,-1); 
        int first= getindex(nums,target, true);
        if(first==-1)
            return v;
        int last=getindex(nums,target, false);
        v[0]=first;
        v[1]= last;
        return v;
    }
    int main()
    {
        vector<int> s(vector<int> nums, int target);
        int target=8;
    }
