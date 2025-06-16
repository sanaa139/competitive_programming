package MaximumDifferenceBetweenIncreasingElements2016;

class Solution {
    public static void main(String[] args) {
        System.out.println(maximumDifference(new int[]{7,1,5,4}));
        System.out.println(maximumDifference(new int[]{9,4,3,2}));
        System.out.println(maximumDifference(new int[]{1,5,2,10}));
    }
    public static int maximumDifference(int[] nums) {
        int maxDiff = -1;

        int min = nums[0];
        for(int i = 1; i < nums.length; i++){
            if(nums[i] > min){
                maxDiff = Math.max(maxDiff, nums[i] - min);
            }
            if(nums[i] < min){
                min = nums[i];
            }
        }
        return maxDiff;
    }
}