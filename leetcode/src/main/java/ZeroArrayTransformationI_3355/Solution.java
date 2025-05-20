package ZeroArrayTransformationI_3355;

class Solution {
    public static void main(String[] args) {
        System.out.println(isZeroArray(new int[]{1,0,1}, new int[][]{{0,2}}));
        System.out.println(isZeroArray(new int[]{4,3,2,1}, new int[][]{{1,3},{0,2}}));
    }

    public static boolean isZeroArray(int[] nums, int[][] queries) {
        int[] delta = new int[nums.length + 1];
        for (int[] query : queries) {
            int start = query[0];
            int end = query[1];

            delta[start]++;
            delta[end + 1]--;
        }

        int[] deltaSum = new int[nums.length + 1];
        int sum = 0;
        for(int i = 0; i < deltaSum.length; i++){
            sum += delta[i];
            deltaSum[i] = sum;
        }

        for(int i = 0; i < nums.length; i++){
            if(nums[i] > deltaSum[i]){
                return false;
            }
        }
        return true;
    }
}
