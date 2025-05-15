package LongestUnequalAdjacentGroupsSubsequenceI_2900;

import java.util.ArrayList;
import java.util.List;

class Solution {
    public static void main(String[] args) {
        System.out.println(getLongestSubsequence(new String[]{"e","a","b"}, new int[]{0,0,1}));
        System.out.println(getLongestSubsequence(new String[]{"a","b","c","d"}, new int[]{1,0,1,1}));
    }
    public static List<String> getLongestSubsequence(String[] words, int[] groups) {
        int[] subsequenceArr = new int[words.length];
        int firstBit = groups[0];
        int bitTemp = firstBit;
        int i = 0;
        while(bitTemp == firstBit){
            subsequenceArr[i] = -1;
            i++;

            if(i >= words.length){
                break;
            }
            bitTemp = groups[i];
        }

        for(int k = i; k < subsequenceArr.length; k++){
            int temp = groups[k];
            int t = k;
            while(temp == groups[k]){
                t--;
                temp = groups[t];
            }
            subsequenceArr[k] = t;
        }

        List<String> tempS = new ArrayList<>();
        int j = subsequenceArr.length - 1;
        do{
            tempS.add(words[j]);
            j = subsequenceArr[j];
        }while(j >= 0);

        List<String> s = new ArrayList<>();
        for(int p = tempS.size() - 1; p >= 0; p--){
            s.add(tempS.get(p));
        }
        return s;
    }
}
