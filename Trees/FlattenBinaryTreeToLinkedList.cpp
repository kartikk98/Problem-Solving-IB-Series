/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void preorder(TreeNode *root, TreeNode *&cur)
 {
     if(root==NULL) return;
     
     TreeNode *lef = root->left;
     TreeNode *rig = root->right;

     root->left=NULL;
     cur->right = root;
     cur = cur->right;
     
     preorder(lef, cur);
     preorder(rig, cur);
 }
 
TreeNode* Solution::flatten(TreeNode* A) {
    
    TreeNode *ans = new TreeNode(0);
    TreeNode *cur = ans;
    preorder(A, cur);
    return A;
    
}
