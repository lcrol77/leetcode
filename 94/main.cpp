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

 // LEFT > ROOT > RIGHT
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        trav(root, ans);
        return ans;
    }

    void trav(TreeNode* node, vector<int> &vec) {
        if (node == nullptr) {
            return;
        }
        trav(node->left, vec);
        vec.push_back(node->val);
        trav(node->right, vec);
    }
};