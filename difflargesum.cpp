#include<iostream>
using namespace std;

int largediff(int arr[], int n){
    int even[n];
    int odd[n];
    int evencount=0;
    int oddcount=0;
    even[0]=arr[0];
    for(int i=1;i<=n;i++){
        int evencount=1;
        if(i%2==0){
         even[evencount]=arr[i];
         evencount++;
        }
        else{
            odd[oddcount]=arr[i];
            oddcount++;
        }
    }
}
int main(){
{
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<=n;i++){
   cin >> arr[i]; 
  }
  cout<< largediff(arr,n);
  return 0;
}
  