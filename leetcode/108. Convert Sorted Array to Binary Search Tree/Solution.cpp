#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return divide(nums, 0, nums.size() - 1);
    }
    
    TreeNode* divide(vector<int>&nums, int low, int high){
        if(low == high){
            return new TreeNode(nums[low]);
        }else if(low < high){
            int mid = low + (high - low) / 2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = divide(nums, low, mid - 1);
            root->right = divide(nums, mid + 1, high);
            return root;
        }
        return 0;
    }
};