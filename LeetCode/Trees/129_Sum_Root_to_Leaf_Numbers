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
    int ans=0;
public:
    int sumNumbers(TreeNode* root) {
        pathsum(root,0);
        return ans;
        
    }
    void pathsum(TreeNode* root,int sum){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            sum=sum*10+root->val;
            ans+=sum;
            return;
        }
        sum=sum*10+root->val;
        pathsum(root->left,sum);
        pathsum(root->right,sum);
    }
};
