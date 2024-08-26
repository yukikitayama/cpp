/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;

        if (root == nullptr) {
            return ans;
        }

        recursion(root, ans);

        return ans;
    }

    void recursion(Node* node, vector<int>& arr) {

        if (node == nullptr) {
            return;
        }

        for (Node* child : node->children) {
            recursion(child, arr);
        }

        arr.push_back(node->val);
    }
};