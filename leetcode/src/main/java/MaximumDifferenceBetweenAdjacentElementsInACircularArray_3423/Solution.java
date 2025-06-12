package MaximumDifferenceBetweenAdjacentElementsInACircularArray_3423;

class Solution {
    public static void main(String[] args) {
        System.out.println(maxAdjacentDistance(new int[]{1,2,4}));
        System.out.println(maxAdjacentDistance(new int[]{-5, -10, -5}));
    }
    public static int maxAdjacentDistance(int[] nums) {
        int maxAbsDiff = Math.abs(nums[0] - nums[nums.length - 1]);
        for(int i = 0; i < nums.length - 1; i++){
            int temp = Math.abs(nums[i] - nums[i+1]);
            if(temp > maxAbsDiff){
                maxAbsDiff = temp;
            }
        }
        return maxAbsDiff;
    }
}