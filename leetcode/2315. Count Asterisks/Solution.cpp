#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        int numOfStars = 0;
        int numOfBars = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '*' && numOfBars % 2 == 0){
                numOfStars++; 
            }
            if(s[i] == '|'){
                numOfBars++;
            }   
        }
        return numOfStars;
    }
};