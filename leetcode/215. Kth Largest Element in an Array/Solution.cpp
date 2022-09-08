#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int kthLargest = 0;
        if(k < nums.size()/2){
            //max heap
            priority_queue<int> pq;
            for(int i = 0; i < nums.size(); i++){
                pq.push(nums[i]);
            }
            for(int i = 0; i < k; i++){
                kthLargest = pq.top();
                pq.pop();
}
        }else{
            //min heap
            priority_queue<int, vector<int>, greater<int>> pq;
            for(int i = 0; i < nums.size(); i++){
                pq.push(nums[i]);
            }
            for(int i = 0; i < nums.size()-k+1; i++){
                kthLargest = pq.top();
                pq.pop();
}
        }
    return kthLargest;
    }
};