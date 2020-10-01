#include<iostream>
using namespace std;

int string_to_int(string str, int n)
{
    if(n==0)
    return 0;
    int smallAnswer=string_to_int(str,n-1);
    int last_digit= str[n-1]- '0';
    return smallAnswer*10+last_digit;

}
int main()
{
    string str="1234";
    int n= str.length();
    cout<< string_to_int(str, n);   
}