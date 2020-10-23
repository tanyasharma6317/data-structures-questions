#include<iostream>
using namespace std;
int sq(int arr1[], int arr2[], int n){
    int sum1=0;
    int sum2=0;
for(int i=0;i<n;i++){
sum1+=arr1[i]*arr1[i];
}
for(int i=0;i<n;i++){
sum2+=arr2[i]*arr2[i]*arr2[i];
}
if(sum1>sum2){
    return 1;
}
else{
    return 0;
}

}
int main(){
    int n;
    cin >> n;
    int arr1[n];
    cout << "Enter first array elements";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int arr2[n];
    cout << "Enter second array elements";
    for(int i=0;i<n;i++){
        cin >> arr2[i];
    }
    int s=sq(arr1,arr2,n);
    if(s==1){
        cout<< "true";
    }
    else{
        cout<< "false";
    }

}