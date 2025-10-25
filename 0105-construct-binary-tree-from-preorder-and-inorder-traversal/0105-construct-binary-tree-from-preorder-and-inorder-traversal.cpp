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
    // int preIndex = 0; // global preorder index

    int find(vector<int>* in, int target, int start, int end) {
        for (int i = start; i <= end; i++) {
            if ((*in)[i] == target)
                return i;
        }
        return -1;
    }

    TreeNode* tree(vector<int>* in, vector<int>* pre, int Instart, int Inend,int index) {
        if (Instart > Inend)
            return NULL;

        // int rootVal = (*pre)[preIndex++]; // pick current root
        TreeNode* root = new TreeNode((*pre)[index]);

        int pos = find(in,(*pre)[index] , Instart, Inend);

        root->left = tree(in, pre, Instart, pos - 1,index+1);
        root->right = tree(in, pre, pos + 1, Inend,index+(pos-Instart)+1);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return tree(&inorder, &preorder, 0, inorder.size() - 1,0);
    }
};