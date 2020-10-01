//There is a range given n and m in which we have to find the count all the prime pairs whose difference is 6. We have to find how many sets are there within a given range.
#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
  
void count_prime(int l, int r) 
{ 
    int count=0;
    bool prime[r + 1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p = 2; p * p <= r; p++) { 
        if (prime[p] == true) { 
            for (int i = p * 2; i <= r; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int i = l; i <= r - 6; i++)  
        if (prime[i] && prime[i + 6]) 
            count++; 
            
    if(count>0)
        cout<<count;
    else
        cout<<"No Prime Pairs";
} 
  
int main() 
{ 
    
    int n,m;
    cin>>n>>m;
    count_prime(n, m); 
    return 0; 
} 