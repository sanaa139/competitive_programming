package FindTheOriginalTypedStringI_3330;

class Solution {
    public static void main(String[] args) {
        System.out.println(possibleStringCount("abbcccc"));
        System.out.println(possibleStringCount("abcd"));
        System.out.println(possibleStringCount("aaaa"));
    }

    public static int possibleStringCount(String word) {
        int count = 1;
        char curr = word.charAt(0);
        for(int i = 1; i < word.length(); i++){
            if(word.charAt(i) == curr){
                count++;
            }else{
                curr = word.charAt(i);
            }
        }

        return count;
    }
}

