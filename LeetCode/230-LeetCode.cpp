// 230. Kth Smallest Element in a BST
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
    int count = 0;
    int ans;
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ans;
    }
    
    void inorder(TreeNode* root, int k) {
        if(root) {
            if(root->left) {
                inorder(root->left,k);
            }
            
            count++;
            if(count==k) {
                ans = root->val;
                return;
            }
            
            if(root->right) {
                inorder(root->right,k);
            }
        }
    }
};
