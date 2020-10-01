#include<iostream>
#include<vector>
using namespace std;
int main()
 {
	//code
	
	    int t;
		cin >> t;
		while(t--){
	    int n, sum; cin >> n;
	    
	    vector<int> v(n);
	    for(int i = 0; i < n; i++) cin >> v[i];
	    cin >> sum;
	    vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
	    
	    for(int i = 0; i <= n; i++) dp[i][0] = 1; 
	    for(int j = 1; j <= sum; j++) dp[0][j] = 0;
	    
	    for(int i = 1; i <= n; i++){
	        for(int j = 1; j <= sum; j++){
	            if(v[i-1] > j) dp[i][j] = dp[i-1][j];
	            else{
	                dp[i][j] = dp[i-1][j] + dp[i-1][j - v[i-1]];
	            }
	        }
	    }
	   
	    cout << dp[n][sum] << endl;
		}
	return 0;
}
