#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        
        if(target < nums[0]){
            return 0;           
        }else if(target > nums[nums.size() - 1]){
            return nums.size();   
        }
               
        while(l <= r){
            int mid = l + ((r - l) / 2);
            
            if(target == nums[mid]){
                return mid;   
            }else if(target > nums[mid]){
                if(mid + 1 <= r && target < nums[mid + 1]){
                    return mid + 1;   
                }else{
                    l = mid + 1;  
                }
            }else{
                if(mid - 1 >= l && target > nums[mid - 1]){
                    return mid;   
                }else{
                    r = mid - 1;   
                }
            }
        }
        return 0;
    }
};