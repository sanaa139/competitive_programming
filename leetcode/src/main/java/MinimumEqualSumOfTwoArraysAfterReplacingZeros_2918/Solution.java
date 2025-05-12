package MinimumEqualSumOfTwoArraysAfterReplacingZeros_2918;

class Solution {
    public static void main(String[] args) {
        System.out.println(minSum(new int[]{3,2,0,1,0}, new int[]{6,5,0}));
        System.out.println(minSum(new int[]{2,0,2,0}, new int[]{1,4}));
    }
    public static long minSum(int[] nums1, int[] nums2) {
        long sum1 = 0, sum2 = 0;
        long zeros1 = 0, zeros2 = 0;
        for(int i = 0; i < nums1.length; i++){
            sum1 += nums1[i];
            if(nums1[i] == 0){
                zeros1++;
            }
        }

        for(int i = 0; i < nums2.length; i++){
            sum2 += nums2[i];
            if(nums2[i] == 0){
                zeros2++;
            }
        }

        if((zeros1 == 0 && (sum2 + zeros2) > (sum1 + zeros1)) || (zeros2 == 0 && (sum1 + zeros1) > (sum2 + zeros2))){
            return -1;
        }

        return Math.max(sum1 + zeros1, sum2 + zeros2);
    }
}