#include<iostream>
using namespace std;

void print(char inp[])
{
    if(inp[0]=='\0')
    return ;

    cout<< inp[0];
    print(inp+1);
}
void reversechar(char inp[])
{
   if(inp[0]=='\0')
   {
       return;
   }
   reversechar(inp+1);
   cout<< inp[0];
}
int main()
{
    char inp[]= "abc";
    print(inp);
    cout<< endl;
    reversechar(inp);
}