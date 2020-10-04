#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string str) 
{ 
	int count[128] = {0};
	for (int i = 0; str[i]; i++) 
		count[str[i]]++; 
	int odd = 0; 
	for (int i = 65; i <=85 ; i++) 
	{ 
		if (count[i] & 1) 
			odd++; 

		if (odd > 1) 
			return false; 
	}  
	return true; 
} 
long long solve(string s)
{
	long long sum =0;
	for(int i=0;i<s.length();i++)
	{
		for(int j=1;i+j<=s.length();j++)
		{
			string s1 = s.substr(i,j);
			//cout<<s1<<"\n";
			ispalindrome(s1)?sum++:sum;
		}
	}
	return sum;
}
int main()
{
			string s;
			getline(cin,s);
			cout<<solve(s)<<endl;
}