package Finding3DigitEvenNumbers_2094;

import java.util.ArrayList;
import java.util.Arrays;

class Solution {
    public static void main(String[] args) {
        System.out.println(Arrays.toString(findEvenNumbers(new int[]{2, 1, 3, 0})));
        System.out.println(Arrays.toString(findEvenNumbers(new int[]{2, 2, 8, 8, 2})));
        System.out.println(Arrays.toString(findEvenNumbers(new int[]{3, 7, 5})));
    }
    public static int[] findEvenNumbers(int[] digits) {
        boolean[] firstDigitArr = new boolean[9]; //1,2,3,4,5,6,7,8,9
        boolean[] secondDigitArr = new boolean[10]; //0,1,2,3,4,5,6,7,8,9
        boolean[] thirdDigitArr = new boolean[5]; //0,2,4,6,8

        ArrayList<Integer> arr = new ArrayList<>();
        for(int i = 0; i < digits.length; i++){
            int firstDigit = digits[i];
            if(firstDigit != 0){
                for(int j = 0; j < digits.length; j++){
                    int secondDigit = digits[j];
                    if(i != j){
                        for(int k = 0; k < digits.length; k++){
                            if(k != i && k != j){
                                int thirdDigit = digits[k];
                                if((thirdDigit % 2 == 0) && !firstDigitArr[firstDigit-1] && !secondDigitArr[secondDigit] && !thirdDigitArr[thirdDigit/2]){
                                    String correctNumber = Integer.toString(firstDigit) + secondDigit + thirdDigit;
                                    arr.add(Integer.parseInt(correctNumber));
                                    thirdDigitArr[thirdDigit/2] = true;
                                }
                            }
                        }
                        thirdDigitArr = new boolean[5];
                        secondDigitArr[secondDigit] = true;
                    }
                }
                secondDigitArr = new boolean[10];
                firstDigitArr[firstDigit-1] = true;
            }
        }
        return arr.stream().mapToInt(i -> i).sorted().toArray();
    }
}
