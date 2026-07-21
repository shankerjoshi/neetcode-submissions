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
    void in_order(TreeNode* root, vector<int>& ans){
        if(root==NULL) return ;
        in_order(root->left, ans);
        ans.emplace_back(root->val);
        in_order(root->right, ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        if(root==NULL) return -1;
        in_order(root,ans);
        return ans[k-1];

    }
};
