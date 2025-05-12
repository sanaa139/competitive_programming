package ThreeConsecutiveOdds_1550;
class Solution {
    public static void main(String[] args) {
        System.out.println(threeConsecutiveOdds(new int[]{2,6,4,1}));
        System.out.println(threeConsecutiveOdds(new int[]{1,2,34,3,4,5,7,23,12}));
    }

    public static boolean threeConsecutiveOdds(int[] arr) {
        int odds = 0;
        for(int num : arr){
            if(num % 2 == 1){
                odds++;
                if(odds == 3){
                    return true;
                }
            }else{
                odds = 0;
            }
        }
        return false;
    }
}