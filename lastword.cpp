
#include<iostream>
#include <string>
using namespace std;

    int lengthOfLastWord(string s) {
        int count=0;
        int n= s.size();
        int i=0;
        while(i<n)
        {
            if(s[i]!= ' ')
            {
                count++;
                i++;
            }
            else{
                while(i<n && s[i]== ' ')
                i++;
                if(i==n)
                    return count;
                else
                    count=0;
            }
        }
        return count;   
        
    }
    int main()
    {
        string s="hello world war";
        cout<< lengthOfLastWord(s);
    }




    