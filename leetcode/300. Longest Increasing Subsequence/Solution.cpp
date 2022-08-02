#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> LIS;
        for(int i = 0; i < nums.size(); i++){
            LIS.push_back(1);   
        }
        
        int maximum = LIS[0];
        for(int i = 1; i < LIS.size(); i++){
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j] && LIS[i] < LIS[j] + 1){
                    LIS[i] = max(LIS[i], LIS[j] + 1); 
                }
            }
            if(maximum < LIS[i]){
                maximum = LIS[i];   
            }
        }
        return maximum;
        
    }
};