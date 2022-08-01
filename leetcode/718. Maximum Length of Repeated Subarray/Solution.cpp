#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int dp[nums1.size() + 1][nums2.size() + 1];

        for(int i = 0; i <= nums1.size(); i++){
            dp[i][0] = 0;
        }
        for(int j = 1; j <= nums2.size(); j++){
            dp[0][j] = 0;
        }

        int maksimum = 0;
        for(int i = 1; i <= nums1.size(); i++){
            for(int j = 1; j <= nums2.size(); j++){
                if(nums1[i - 1] == nums2[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    if(maksimum < dp[i][j]){
                        maksimum = dp[i][j];
                    }
                }else{
                    dp[i][j] = 0;
                }
            }
        }
        return maksimum;
    }
};