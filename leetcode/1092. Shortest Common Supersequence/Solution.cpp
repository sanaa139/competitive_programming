#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int LCS[str1.size() + 1][str2.size() + 1];
		
        int i, j;
		for(i = 0; i < str1.size() + 1; i++){
			for(j = 0; j < str2.size() + 1; j++){
				if(i == 0 || j == 0){
					LCS[i][j] = 0;
				}else if(str1[i - 1] == str2[j - 1]){
					LCS[i][j] = LCS[i - 1][j - 1] + 1;
				}else{
					LCS[i][j] = max(LCS[i][j - 1], LCS[i - 1][j]);
				}
			}
		}
        i = str1.size();
        j = str2.size();
                                
        string shortestCommonSubsequence;
        while(i > 0 && j > 0){
            if(str1[i - 1] == str2[j - 1]){
                shortestCommonSubsequence.push_back(str1[i - 1]);
                i--;
                j--;
            }else if(LCS[i - 1][j] > LCS[i][j - 1]){
                shortestCommonSubsequence += str1[i - 1];
                i--;
            }else{
                shortestCommonSubsequence += str2[j - 1];
                j--;    
            }   
        }
        
        while(i > 0){
            shortestCommonSubsequence.push_back(str1[i - 1]);
            i--;
        }
        
        while(j > 0){
            shortestCommonSubsequence.push_back(str2[j - 1]);
            j--;
        }
        
        reverse(shortestCommonSubsequence.begin(), shortestCommonSubsequence.end());
		return shortestCommonSubsequence;
    }
};