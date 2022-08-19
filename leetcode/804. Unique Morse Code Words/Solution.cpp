#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.",
                                "--.","....","..",".---","-.-",".-..",
                                "--","-.","---",".--.","--.-",".-.",
                                "...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> morseTransformations;
        for(int i = 0; i < words.size(); i++){
            string s = "";
            for(int j = 0; j < words[i].size(); j++){
                s += morse[words[i][j] - 'a'];
            }
            morseTransformations.insert(s);
        }
        return morseTransformations.size();
    }
};