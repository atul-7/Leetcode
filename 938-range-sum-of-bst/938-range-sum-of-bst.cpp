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
    int ans = 0;
    void helper(TreeNode* root, int low, int high) {
    if(root == NULL)
            return;
        if(root->val >= low and root->val <= high)
            ans += root->val;
        helper(root->left,low,high);
        helper(root->right,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        helper(root,low,high);
        return ans;
    }
};