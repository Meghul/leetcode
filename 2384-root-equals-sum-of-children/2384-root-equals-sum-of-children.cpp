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
pair<bool,int>checkTreefast(TreeNode* root){
if(root==NULL){
    pair<bool,int>p=make_pair(true,0);
    return p;
}
if(root->left==NULL && root->right==NULL){
    pair<bool,int>p=make_pair(true,root->val);
    return p;
}
pair<bool,int>leftans=checkTreefast(root->left);
pair<bool,int>rightans=checkTreefast(root->right);

bool left=leftans.first;
bool right=rightans.first;

bool condn=root->val==leftans.second+rightans.second;

pair<bool,int>ans;
if(left&&right&&condn){
    ans.first=true;
    ans.second=2*root->val;
}
else{
    ans.first=false;
}
return ans;
}
    bool checkTree(TreeNode* root) {
        return checkTreefast(root).first;
    }
};