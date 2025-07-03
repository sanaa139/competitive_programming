package FindTheKthCharacterInStringGameI_3304;

class Solution {
    public static void main(String[] args) {
        System.out.println(kthCharacter(5));
        System.out.println(kthCharacter(10));
    }

    public static char kthCharacter(int k) {
        String word = "a";
        int i = 1;
        while(i < k){
            String temp = "";
            for(int j = 0; j < word.length(); j++){
                temp += (char) (word.charAt(j) + 1);
            }
            word += temp;
            i = word.length();
        }

        return word.charAt(k - 1);
    }
}
