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
    int global = 0; 
    int diameterOfBinaryTree(TreeNode* root) {
        global = 0;
        height(root);
        return global;
    }
private:
    int height(TreeNode* root){
        if (!root) return 0;
        int left = height(root->left);
        int right = height(root->right);
        global = std::max(global, left + right);

        return std::max(left, right) + 1;
    }
};
