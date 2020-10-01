#include<iostream>
using namespace std;
void subsequence(string str, string output)
{
    if(str.length()== 0)
    {
        cout<< output << endl;
        return;
    }
    subsequence(str.substr(1), output);
    subsequence(str.substr(1), output+str[0]);


}
int main()
{
    string str;
    cin >> str;
    string output= "";
    subsequence(str, output);
}
