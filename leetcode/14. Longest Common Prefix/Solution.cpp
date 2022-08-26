#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefixBetweenTwoStrings(string str1, string str2){
        string result;
        for(int i = 0, j = 0; i < str1.size() && j < str2.size(); i++, j++){
            if(str1[i] != str2[j]) break;

            result.push_back(str1[i]);
        }
        return result;
    }   
    
    string longestCommonPrefix(vector<string> array, int low, int high){
        if(low == high){
            return array[low];
        }

        string str1, str2;
        if(low < high){
            int mid = low + (high - low)/2;
            str1 = longestCommonPrefix(array, low, mid);
            str2 = longestCommonPrefix(array, mid + 1, high);
        }
        return longestCommonPrefixBetweenTwoStrings(str1, str2);
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string LCP = longestCommonPrefix(strs, 0, strs.size() - 1);
        return LCP;
    }
};