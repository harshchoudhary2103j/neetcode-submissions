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
    TreeNode* ans= NULL;
    int helper(TreeNode*root, TreeNode*p, TreeNode*q){
        if(root==NULL){
            return 0;
        }
        int lh = helper(root->left, p,q);
        int rh = helper(root->right, p,q);
        int self = 0;
        if(root==p||root==q){
            self = 1;
        }
        int temp = lh+rh+self;
        if(ans==NULL && temp == 2){
            ans = root;
        }
        return temp;

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         int temp = helper(root,p,q);
        return ans;
    }
};
