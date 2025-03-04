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
void inorder(TreeNode* root,vector<int>&in){
    if(root==nullptr){
        return;
    }
     in.push_back(root->val);
    inorder(root->left,in);
   
    inorder(root->right,in);
}
    void flatten(TreeNode* root) {
        vector<int>inorderval;
        inorder( root,inorderval);
        int n=inorderval.size();
       
        TreeNode* curr=root;
        //2nd step
        for(int i=1;i<n;i++){
            TreeNode* temp=new TreeNode(inorderval[i]);
            curr->left=nullptr;
            curr->right=temp;
            curr=temp;
        }
       
       
        
    }
};