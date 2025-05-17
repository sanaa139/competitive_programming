package Sort_Colors_75;

import java.util.Arrays;

class Solution {
    public static void main(String[] args) {
        sortColors(new int[]{2,0,2,1,1,0});
        sortColors(new int[]{2,0,1});
    }
    public static void sortColors(int[] nums) {
        int red = 0, white = 0, blue = 0;
        for(int num : nums){
            if(num == 0){
                red++;
            }else if(num == 1){
                white++;
            }else{
                blue++;
            }
        }
        for(int i = 0; i < red; i++){
            nums[i] = 0;
        }
        for(int i = red; i < red + white; i++){
            nums[i] = 1;
        }
        for(int i = red + white; i < red + white + blue; i++){
            nums[i] = 2;
        }
        System.out.println(Arrays.toString(nums));
    }
}