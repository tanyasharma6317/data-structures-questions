#include<iostream>
using namespace std;

int print_toh(int n)
{
    if(n==0)
    return 0;
    return print_toh(n-1) + 1 + print_toh(n-1) ;

}
void printsteps(int n ,char s,char d, char h)
{
    if(n==0)
    {
        return;
    }
    printsteps(n-1 ,s, h, d);
    cout<<  "Moving disks " <<n<< " source " <<s<< " to destination " <<d << endl;
    printsteps(n-1 ,h,d,s);



}
int main()
{
   int n;
   cin>> n; 
   cout<< print_toh(n);
   cout<< endl;
   printsteps(n, 'A', 'C', 'B');

}