#include<iostream>
using namespace std;
int countzeroes(int n)
{
    if(n==0)
    return 0;
    int c= countzeroes(n/10);
    int last_digit= n%10;
    if(last_digit==0)
    {
        return c+1;
    }
    else
    {
       return c;
    }
    
}
int main()
{
    cout<< countzeroes(120780);
}