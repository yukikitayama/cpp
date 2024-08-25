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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;

        dfs(root, ans);

        return ans;
    }

    void dfs(TreeNode* node, vector<int>& ans) {
        if (!node) {
            return;
        }

        dfs(node->left, ans);
        dfs(node->right, ans);

        ans.push_back(node->val);
    }
};