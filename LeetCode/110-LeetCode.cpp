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
    int height(TreeNode *root) {
        if(root==NULL) {
            return 0;
        }
        else {
            int ldepth = height(root->left);
            int rdepth = height(root->right);
            
            return max(ldepth,rdepth) + 1;
        }
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) {
            return true;
        }
        else {
            int lheight = height(root->left);
            int rheight = height(root->right);
            
            if(abs(lheight-rheight)<=1 && isBalanced(root->left) && isBalanced(root->right)) {
                return true;
            }
            else {
                return false;
            }
        }
    }
};
