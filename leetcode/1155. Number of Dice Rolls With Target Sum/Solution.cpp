#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        int dp[n + 1][target + 1];
        
        for(int i = 0; i < n+ 1; i++){
            for(int j = 0; j < target + 1; j++){
                dp[i][j] = 0;   
            }
        }
        
        for(int j = 1; j < target + 1 && j <= k; j++){
            dp[1][j] = 1;   
        }
        
        int MOD = 1000000007;
        for(int i = 1; i < n + 1; i++){
            for(int j = 1; j < target + 1; j++){
                for(int p = 1; p <= k && p < j; p++){
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - p]) % MOD; 
                }
            }
        }
        return dp[n][target];
    }
};