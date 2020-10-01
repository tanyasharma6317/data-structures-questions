#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
bool isPalindrome(string s) {
        int n=s.size();
        int beg=0;
        int end=n-1;
        
        
            while(beg<=end)
            {
                
                while(beg<end && !isalnum(s[beg])) beg++;
                while(beg<end && !isalnum(s[end])) end--;
                
                if(toupper(s[beg]) != toupper(s[end]))
                    return false;
                    beg++;
                    end--;  
            }  
        return true;
        }
        int main()
        {
            string s= {"race a car"};
            cout<< isPalindrome(s);
        }