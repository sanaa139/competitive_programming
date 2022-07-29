#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        
        while(low <= high){
            if(nums[low] <= nums[high]){
                return nums[low];   
            }
            int mid = low + ((high - low) / 2);
            
            int next = (mid + 1) % nums.size();
            int prev = (mid + nums.size() - 1) % nums.size();
            cout << "next: " << next << " prev: " << prev << endl;
            if(nums[mid] <= nums[next] && nums[mid] < nums[prev]){
                return nums[mid];   
            }else if(nums[mid] <= nums[high]){
                high = mid - 1;   
            }else if(nums[mid] >= nums[low]){
                low = mid + 1;   
            }
        }
        return -1;
    }
};