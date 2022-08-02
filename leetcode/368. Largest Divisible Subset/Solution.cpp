#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        
        vector<int> dp;
        dp.push_back(1);
        for(int i = 1; i < nums.size(); i++){
            dp.push_back(0);
        }
        
        int maximumLengthLDS = 1;
        int maximumLengthLDSindex = 0;
        for(int i = 1; i < nums.size(); i++){
            for(int j = i - 1; j >= 0; j--){
                if(nums[j] % nums[i] == 0){
                    dp[i] = max(dp[j], dp[i]);   
                }
            }
            dp[i] = dp[i] + 1;
            if(maximumLengthLDS < dp[i]){
                maximumLengthLDSindex = i;
                maximumLengthLDS = dp[i];
            }
        }
        
        vector<int> LDS;
        LDS.push_back(nums[maximumLengthLDSindex]);
        maximumLengthLDS--;
        bool shouldBeInLDS = true;
        for(int i = maximumLengthLDSindex - 1; i >= 0; i--){
            if(dp[i] == maximumLengthLDS && nums[i] % nums[maximumLengthLDSindex] == 0){
                for(int j = 0; j < LDS.size(); j++){
                    if(nums[i] % LDS[j] != 0){
                        shouldBeInLDS = false; 
                    }
                }
                if(shouldBeInLDS == true){
                    LDS.push_back(nums[i]);
                    maximumLengthLDS--;
                }
                shouldBeInLDS = true;
            }
        }
        return LDS;
        
    }
};