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
    bool func(TreeNode* root, int minn, int maxx){
        if(root==NULL) return true;
        // if(func(root->left) && func(root->right)) return true;
        if(root->val <= minn || root->val>=maxx) return false;
        bool left = func(root->left,minn,root->val);
        bool right = func(root->right,root->val, maxx);

        return (left && right);
        
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        int minn = -1001, maxx = 1001;
        return func(root,minn,maxx);
    }
};
