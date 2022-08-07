#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool notASpace = false;
        for(int i = s.size() - 1; i >= 0; i--){
            if(notASpace == true && s[i] == ' '){
                break;   
            }
            if(s[i] != ' '){
                notASpace = true;
                length++;
            }
        }
        return length;
    }
};