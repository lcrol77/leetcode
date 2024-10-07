#include <vector>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* node) {
        std::vector<int> vec;
        long smallest = LONG_MIN;
        inorder(node, vec);
        for (int item : vec) {
            if (item <= smallest) {
                return false;
            }
            smallest = item;
        }
        return true;
    }

private:
    void inorder(TreeNode* node, std::vector<int>& vec) {
        if (node == nullptr) {
            return;
        }
        inorder(node->left, vec);
        vec.push_back(node->val);
        inorder(node->right, vec);
    }
};