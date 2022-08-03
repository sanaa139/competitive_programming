#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT_MAX;
        int left = 0;
        int val_sum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            val_sum += nums[i];
            while(val_sum >= target){
                result = min(result, i + 1 - left);
                val_sum -= nums[left];
                left++;
            }
        }
        
        if(result != INT_MAX){
            return result;   
        }else{
            return 0;   
        }
    }
};