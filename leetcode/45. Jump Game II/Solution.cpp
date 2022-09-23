#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int dp[nums.size()];
        for(int i = 0; i < nums.size(); i++){
            dp[i] = INT_MAX;
        }

        dp[0] = 0;
        
        for(int i = 1; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                if(j + nums[j] >= i && dp[j] != INT_MAX){
                    dp[i] = min(dp[j] + 1, dp[i]);
                }
            }
        }
        return dp[nums.size() - 1];
    }
};