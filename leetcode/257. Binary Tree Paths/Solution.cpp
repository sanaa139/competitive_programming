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
    vector<int> path;
    vector<string> paths;
    
    void savePath(){     
        string singlePath = "";
        for(int i = 0; i < path.size(); i++){
            singlePath += to_string(path[i]);
            cout << singlePath << endl;
            if(i != path.size() - 1){
                singlePath += "->";
            }
        }
        paths.push_back(singlePath);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        backtracking(root);
        return paths;
    }
    
    void backtracking(TreeNode* root){
        if(root != nullptr){
            path.push_back(root->val);
            if(root->left == nullptr && root->right == nullptr){
                savePath();
            }else{
                backtracking(root->left);
                backtracking(root->right);
            }
            path.pop_back();
        }
    }
};