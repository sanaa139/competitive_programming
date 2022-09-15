#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityElement = nums[0];
        int count = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == majorityElement){
                count++;
            }else{
                count--;
                if(count == 0){
                    majorityElement = nums[i];
                    count++;
                }
            }
        }
        return majorityElement;
    }
};