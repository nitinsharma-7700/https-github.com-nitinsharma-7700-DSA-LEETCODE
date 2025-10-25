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
    // Helper function to find index of a target in inorder array
    int find(vector<int>& inorder, int start, int end, int target) {
        for (int i = start; i <= end; i++) {
            if (inorder[i] == target) return i;
        }
        return -1;
    }

    // Recursive function to build the tree
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int& postIndex) {
        if (inStart > inEnd) return nullptr;

        // Pick current node from postorder
        int rootVal = postorder[postIndex--];
        TreeNode* root = new TreeNode(rootVal);

        // Find position in inorder
        int pos = find(inorder, inStart, inEnd, rootVal);

        // Build right subtree first (important)
        root->right = build(inorder, postorder, pos + 1, inEnd, postIndex);
        root->left = build(inorder, postorder, inStart, pos - 1, postIndex);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex = postorder.size() - 1;
        return build(inorder, postorder, 0, inorder.size() - 1, postIndex);
    }
};