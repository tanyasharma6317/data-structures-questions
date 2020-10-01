#include<iostream>
using namespace std;
int sum_of_digits(int n)
{
    if(n==0)
    return 0;
    int c= sum_of_digits(n/10);
   int s= n%10;
   return c+s;

}
int main()
{
    cout<< sum_of_digits(234);
    
}