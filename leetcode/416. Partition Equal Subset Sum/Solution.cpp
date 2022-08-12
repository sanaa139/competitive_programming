#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
		    sum += nums[i];   
        }
            
        if(sum % 2 == 1) return false;
        
        bool dp[nums.size() + 1][sum/2 + 1];
        for(int i = 0; i < nums.size(); i++){
		    dp[i][0] = true;
        }
        for(int j = 1; j < sum/2 + 1; j++){
		    dp[0][j] = false;  
        }

        for(int i = 1; i < nums.size() + 1; i++){
		    for(int j = 1; j < sum/2 + 1; j++){
				if(dp[i-1][j] == true){
					dp[i][j] = dp[i-1][j];   
				}else if(j - nums[i-1] >= 0){
					dp[i][j] = dp[i-1][j - nums[i-1]];   
				}else{
					dp[i][j] = false;   
				}
		    }
        }
        
        return dp[nums.size()][sum/2];
    }
};