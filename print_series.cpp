// 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
       if(i%2!=0){
           if(i==1)
             a=1;
           else
             a=a*2;
       } 
       else {
        if(i==2)
          b=1;
          else
          b=b*3;
       }
       
    }
    if(n%2!=0){
        cout<< n << "th number in series is "  << a;
    }
    else{
       cout<< n << "th number in series is "  << b;
    }

    return 0;
}

