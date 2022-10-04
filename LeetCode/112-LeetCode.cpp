// 112. Path Sum
// Difficulty: Easy

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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return checkSum(root, targetSum);
    }

    bool checkSum(TreeNode* root, int sum) {
        if(root == NULL) {
            return false;
        }

        bool ans = false;

        sum -= root->val;

        if(sum == 0 && (root->left == NULL & root->right == NULL)) {
            return true;
        }

        if(root->left != NULL) {
            ans = ans || checkSum(root->left, sum);
        } 
        if(root->right != NULL) {
            ans = ans || checkSum(root->right, sum);
        }

        return ans;
    }
};
