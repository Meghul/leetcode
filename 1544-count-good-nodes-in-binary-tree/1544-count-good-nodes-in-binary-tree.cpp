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
    int cnt=0;
    void dfs(TreeNode* root,int currmax){
        if(root==NULL) return;
        if(root->val>=currmax){
            cnt++;
            currmax=root->val;
        }
        dfs(root->left,currmax);
        dfs(root->right,currmax);
    }
    int goodNodes(TreeNode* root) {
        dfs(root,root->val);
        return cnt;
    }
};