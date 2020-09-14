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
    int sum =0;
    int sum_dfs(TreeNode* root,int sum){
        if(!root) return 0;
        sum = (sum<<1) + root->val;
        if(!root->right && !root->left) return sum;
        return sum_dfs(root->right,sum) + sum_dfs(root->left,sum);
        
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        return sum_dfs(root, 0);
    }
};