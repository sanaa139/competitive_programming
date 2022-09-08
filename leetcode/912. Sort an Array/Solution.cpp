#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high){
        int leftSubarraySize = mid - low + 1;
        int rightSubarraySize = high - mid;
        
        int* leftSubarray = new int[leftSubarraySize];
        int* rightSubarray = new int[rightSubarraySize];
        
        for(int i = 0; i < leftSubarraySize; i++){
            leftSubarray[i] = nums[low + i];
        }
        for(int i = 0; i < rightSubarraySize; i++){
            rightSubarray[i] = nums[mid + 1 + i];
        }
        
        int indexOfLeftSubarray = 0;
        int indexOfRightSubarray = 0;
        int indexOfMergedArray = low;
        
        while(indexOfLeftSubarray < leftSubarraySize && indexOfRightSubarray < rightSubarraySize){
            if(leftSubarray[indexOfLeftSubarray] < rightSubarray[indexOfRightSubarray]){
                nums[indexOfMergedArray] = leftSubarray[indexOfLeftSubarray];
                indexOfLeftSubarray++;
            }else{
                nums[indexOfMergedArray] = rightSubarray[indexOfRightSubarray];
                indexOfRightSubarray++;
            }
            indexOfMergedArray++;
        }
        
        for(int i = indexOfLeftSubarray; i < leftSubarraySize; i++){
            nums[indexOfMergedArray] = leftSubarray[i];
            indexOfMergedArray++;
        }
        for(int i = indexOfRightSubarray; i < rightSubarraySize; i++){
            nums[indexOfMergedArray] = rightSubarray[i];
            indexOfMergedArray++;
        }
        
        delete[] leftSubarray;
        delete[] rightSubarray;
        
    }
    
    
    void MergeSort(vector<int>& nums, int low, int high){
        if(low < high){
            int mid = low + (high - low) / 2;
            MergeSort(nums, low, mid);
            MergeSort(nums, mid + 1, high);
            merge(nums, low, mid, high);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        MergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};