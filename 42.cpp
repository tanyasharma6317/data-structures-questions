#include<iostream>
using namespace std;
void print_permutation(char str[], int i=0)
{
    if(str[i]=='\0')
    {
        cout<< str<< endl;
        return;
    }
    for(int j=i;str[j]!='\0';j++)
    {
        swap(str[i],str[j]);
        print_permutation(str,i+1);
        swap(str[i],str[j]);
    }
}
int main()
{
    char str[]= "abc";
    print_permutation(str);
}