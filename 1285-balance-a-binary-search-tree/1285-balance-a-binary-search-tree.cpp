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
void inorder(TreeNode* root,vector<int>&ans){
    if(root==nullptr){
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}

TreeNode* inOrderToBst(int s,int e,vector<int>&ans){
    if(s>e){
        return nullptr;
    }
    int mid=(e+s)/2;
    TreeNode* root=new TreeNode(ans[mid]);
    root->left=inOrderToBst(s,mid-1,ans);
    root->right=inOrderToBst(mid+1,e,ans);
    return root;
}
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        int n=ans.size()-1;
      return inOrderToBst(0,n,ans);
    }
};