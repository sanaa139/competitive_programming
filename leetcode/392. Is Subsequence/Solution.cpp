#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool dp[s.size() + 1][t.size() + 1];
        
        dp[0][0] = true;
        for(int i = 1; i < s.size() + 1; i++){
            dp[i][0] = false;   
        }
        for(int j = 1; j < t.size() + 1; j++){
            dp[0][j] = true;   
        }
        
        for(int i = 1; i < s.size() + 1; i++){
            for(int j = 1; j < t.size() + 1; j++){
                if(s[i - 1] == t[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1];   
                }else{
                    dp[i][j] = dp[i][j - 1];  
                }
            }
        }
        
        return dp[s.size()][t.size()];
    }
};