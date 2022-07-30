#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxEnding = 0;
        int maxSoFar = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++){
            maxEnding = maxEnding + nums[i];
            if(maxEnding < nums[i]){
                maxEnding = nums[i];   
            }
            if(maxSoFar < maxEnding){
                maxSoFar = maxEnding;   
            }
        }
        return maxSoFar;
    }
};