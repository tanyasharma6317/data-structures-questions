#include<bits/stdc++.h>
using namespace std;
int count=0;
int N;
char mtr[1000][1000];
void count_adj(int i,int j)
{
    if(i<0 || j<0 || i>N || j>N)
     return ;
    if(mtr[i][j]=='T')
    {
        mtr[i][j]='W';
        ::count++;
        count_adj(i-1,j);
        count_adj(i+1,j);
        count_adj(i,j+1);
        count_adj(i,j-1);
    }
}
int main()
{
    cin>>N;
    for(int i=0; i<N; i++)
     cin>>mtr[i];
    int max_count=0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(mtr[i][j]=='T')
            {
                count_adj(i,j);
                if(max_count< ::count)
                 max_count= ::count;
                ::count=0;
            }
        }
    }
    cout<<max_count;
    return 0;
}