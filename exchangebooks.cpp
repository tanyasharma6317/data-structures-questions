#include <bits/stdc++.h> 
using namespace std; 
  
long long int countDer(long long int n) 
{ 
// Base cases 
if (n == 1) 
    return 0; 
if (n == 0) 
    return 1; 
if (n == 2) 
    return 1; 
return ((n - 1) * (countDer(n - 1) +  
                  countDer(n - 2)))% 100000007; 
} 

int main() 
{ 
    long long int n;
    cin >> n;
    cout <<countDer(n); 
    return 0; 
} 