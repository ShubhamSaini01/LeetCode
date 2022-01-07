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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> levelOrder;
        if(root == NULL) return levelOrder; 
        queue<TreeNode*> q; 
        q.push(root); 
        int i=0;
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                levelOrder[i].push_back(node->val);
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
            levelOrder.push_back(level);
        }
        return levelOrder;
        
    }
        
//         TreeNode* temp = root;
//         int i=1;
//         levelOrder[0].push_back(temp->val);

//         while(temp){
//             levelOrder[i].push_back(temp->left->val);
//             levelOrder[i].push_back(temp->right->val);
//             i++;
//             temp=temp->right;
//         }
//         return levelOrder;
//     }
};
