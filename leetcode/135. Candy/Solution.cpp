#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int leftChain[ratings.size()];
        int rightChain[ratings.size()];
        
        for(int i = 0; i < ratings.size(); i++){
            leftChain[i] = 1;
            rightChain[i] = 1;
        }
        
        for(int i = 1; i < ratings.size(); i++){
            if(ratings[i] > ratings[i - 1]){
                leftChain[i] = leftChain[i - 1] + 1;   
            }
        }
        for(int i = ratings.size() - 2; i >= 0; i--){
            if(ratings[i] > ratings[i + 1]){
                rightChain[i] = rightChain[i + 1] + 1;   
            }
        }
        
        int sum = 0;
        for(int i = 0; i < ratings.size(); i++){
            sum += max(leftChain[i], rightChain[i]);
        }
        return sum;
    }
};