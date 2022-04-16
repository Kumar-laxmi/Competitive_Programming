// 98. Validate Binary Search Tree
// Difficulty: Medium

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(!root) {
            return true;
        }
        
        long min = LONG_MIN;
        long max = LONG_MAX;
        
        return CheckBST(root, min, max);
    }
    
    bool CheckBST(TreeNode* root, long min, long max) {
        if(!root) {
            return true;
        }
        
        if(root->val <=min || root->val >=max) {
            return false;
        }
        
        return CheckBST(root->left,min,root->val) && CheckBST(root->right,root->val,max);
    }
};
