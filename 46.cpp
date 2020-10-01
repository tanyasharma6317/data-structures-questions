#include<iostream>
using namespace std;

void merge(int x[],int y[], int a[],int s, int e )
{
    int mid= (s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    while(i<=mid && j<=e)
    {
        if(x[i]<y[j])
        {
            a[k]=x[i];
            i++;
            k++;
        }
        else
        {
            a[k]=y[j];
            j++;
            k++;
        } 
    }
     while(i<=mid)
    {
    
            a[k]=x[i];
            i++;
            k++;
    }
    while(j<=e)
        {
            a[k]=y[j];
            j++;
            k++;
        } 
}
void mergesort(int a[],int s, int e)
{
  if(s>=e)
  return;
  int mid= (s+e)/2;
  int x[100];
  int y[100];
  for(int i=0;i<=mid;i++)
  {
      x[i]= a[i];
  }
  for(int i=mid+1;i<=e;i++)
  {
      y[i]= a[i];
  }
  mergesort(x,s,mid);
  mergesort(y,mid+1,e);
  merge(x,y,a,s,e);
}
int main()
{
    int a[]= {4,3,1,5,6,2};
    mergesort(a,0,5);
    for(int i=0;i<6;i++)
    {
       cout<< a[i]<< " ";
    }
}
