#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string word1string, word2string;
        for(int i = 0; i < word1.size(); i++){
            word1string += word1[i];
        }
        for(int i = 0; i < word2.size(); i++){
            word2string += word2[i];
        }
        if(word1string == word2string){
            return true;   
        }else{
            return false;   
        }
    }
};