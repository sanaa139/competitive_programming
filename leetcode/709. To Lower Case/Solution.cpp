#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        string newString = "";
        for(int i = 0; i < s.length(); i++){
            int temp = s[i];
            if(s[i] >= 'A' && s[i] <= 'Z'){
                newString += s[i] + 32;   
            }else{
                newString += s[i];   
            }
        }
        return newString;
    }
};