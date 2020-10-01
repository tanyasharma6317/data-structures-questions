#include<iostream>
#include<vector>
using namespace std;
void subsequence(string str, string output, vector<string> &v)
{
    if(str.length()== 0)
    {
        v.push_back(output);
        return;
    }
    subsequence(str.substr(1), output, v);
    subsequence(str.substr(1), output+str[0], v);
}
int main()
{
    string str;
    cin >> str;
    string output= "";
    vector<string> v;
    subsequence(str, output,v);
    for(int i=0;i<v.size();i++)
    {
        cout<< v[i] << endl;
    }
}
