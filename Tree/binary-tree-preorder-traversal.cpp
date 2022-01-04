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
    void findSol(TreeNode* root,vector<int>& preOrder ){
        if (root == NULL)
            return;
 
    /* first print data of node */
        preOrder.push_back(root->val);// << " ";
 
        findSol(root->left, preOrder);
        findSol(root->right, preOrder);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
    vector<int> preOrder;
        
        findSol(root, preOrder);
        return preOrder;
        
    }
};
