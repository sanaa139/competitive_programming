#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int numOfSpaces = 0;
        int numOfWords = 0;
        int maxNumOfWords = 0;
        for(int i = 0; i < sentences.size(); i++){
            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    numOfSpaces++;  
                }
            }
            numOfWords = numOfSpaces + 1;
            numOfSpaces = 0;
            if(maxNumOfWords < numOfWords){
                maxNumOfWords = numOfWords;   
            }
            numOfWords = 0;
        }
        return maxNumOfWords;
    }
};