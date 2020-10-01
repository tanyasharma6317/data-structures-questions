#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sub(int n, int arr[]){
 int list[n];
 for(int i=0;i<n;i++){
     list[i]=1;
 }
 for(int i=1;i<n;i++){
     for(int j=0;j<i;j++){
         if(arr[i]>arr[j] && list[i]< list[j]+1){
             list[i]=list[j]+1;
         }
     }
 }
 int max= list[0];
 for(int i=0;i<n;i++){
     if(list[i]>max){
         max= list[i];
     }
 }
 return max;
}   
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << sub(n,arr);
    return 0;
}