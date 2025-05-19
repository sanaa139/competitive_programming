package TypeOfTriangle_3024;

class Solution {
    public static void main(String[] args) {
        System.out.println(triangleType(new int[]{3, 3, 3}));
        System.out.println(triangleType(new int[]{3, 4, 5}));
    }
    public static String triangleType(int[] nums) {
        if(nums[0] == nums[1] && nums[0] == nums[2]){
            return "equilateral";
        }

        if((nums[0] + nums[1] > nums[2]) && (nums[0] + nums[2] > nums[1]) && (nums[1] + nums[2] > nums[0])){
            if((nums[0] == nums[1]) || (nums[0] == nums[2]) || (nums[1] == nums[2])){
                return "isosceles";
            }else{
                return "scalene";
            }
        }
        return "none";
    }
}