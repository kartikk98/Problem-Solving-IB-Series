/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void invert(TreeNode *root)
 {
     if(root==NULL) return;
     
     swap(root->left, root->right);
     invert(root->left);
     invert(root->right);
 }
 
 bool same(TreeNode *l, TreeNode *r)
 {
     if(l==NULL && r==NULL) return true;
     if(l==NULL || r==NULL) return false;
     
     if(l->val != r->val) return false;
     
     return same(l->left, r->left) && same(l->right, r->right);
 }
int Solution::isSymmetric(TreeNode* A) {
    if(A==NULL || (A->left==NULL && A->right==NULL)) return true;
    if(A->left==NULL || A->right==NULL) return false;
    
    invert(A->right);
    
    return same(A->left, A->right);
}
