#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int index = -1;
        bool nonRepeating = false;
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < s.size(); j++){
                if(s[j] == s[i] && j != i){
                    nonRepeating = false;
                    index = -1;
                    break;
                }else{
                    index = i;
                    nonRepeating = true;
                }
            }
            if(nonRepeating == true){
                break;   
            }
        }
        return index;
    }
};