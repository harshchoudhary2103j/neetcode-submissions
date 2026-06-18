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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) {
            TreeNode* temp = new TreeNode(val);
            return temp;
        }
        TreeNode* temp = root;
        while (true) {
            if (temp->val > val) {
                if (!temp->left) {
                    TreeNode* temp2 = new TreeNode(val);
                    temp->left = temp2;
                    break;
                } else {
                    temp = temp->left;
                }
            } else if (temp->val < val) {
                if (!temp->right) {
                    TreeNode* temp2 = new TreeNode(val);
                    temp->right = temp2;
                    break;
                } else {
                    temp = temp->right;
                }
            }
        }
        return root;
    }
};