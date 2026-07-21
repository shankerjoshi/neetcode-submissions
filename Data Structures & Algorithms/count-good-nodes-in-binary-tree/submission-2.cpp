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
    
    void func(TreeNode* root, int& count, int maxx){
        if(root==NULL) return ;
        if(root->val>=maxx){
            maxx = root->val;
            count++;
        }
        func(root->left,count,maxx);
        func(root->right,count,maxx);

    }
    int goodNodes(TreeNode* root) {
        int count=0;
        int maxx=-101;
        // if(root!=NULL) count=1;
        func(root,count,maxx);

        return count;
    }
};
