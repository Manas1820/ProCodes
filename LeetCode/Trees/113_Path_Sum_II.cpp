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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>t;
        vector<int>cur;
        pathsum(root,targetSum,cur,t);
        return t;
        
    }
    
    void pathsum(TreeNode* root,int sum,vector<int>cur,vector<vector<int>> &t){
        if(root == NULL) return;
        cur.push_back(root->val);
        if(root->left == NULL && root->right == NULL && root->val==sum)
            t.push_back(cur);

        pathsum(root->left,sum-root->val,cur,t);
        pathsum(root->right,sum-root->val,cur,t);
        cur.pop_back();
    }
};
