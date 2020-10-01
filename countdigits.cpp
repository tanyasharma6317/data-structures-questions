#include<iostream>
using namespace std;
int count(int n)
{
    if(n==0)
    return 0;
  int c=count(n/10);
  return c+1;
}
int main()
{
    cout<< count(45678);
}