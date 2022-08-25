#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int numOfPairs = 0;
        unordered_map<int, int> map;
        for(int num : nums){
            numOfPairs += map[num]++;
        }
        return numOfPairs;
    }
};