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
TreeNode* Solution::invertTree(TreeNode* A) {
    if(A==NULL) return A;
    invert(A);
    return A;
}
