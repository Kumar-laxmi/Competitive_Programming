// 111. Minimum depth of Binary Tree
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
    int minDepth(TreeNode* root) {
        if(root==NULL) {
            return 0;
        }
        else {
            int ldepth = minDepth(root->left);
            int rdepth = minDepth(root->right);
            
            if(ldepth==0 || rdepth==0) {
                return max(ldepth,rdepth) + 1;
            }
            
            return min(ldepth,rdepth) + 1;
        }
    }
};
