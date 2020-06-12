/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void dfs(TreeNode *root, int h, int &max)
 {
     if(root==NULL) return;
     h++;
     if(root->left==NULL && root->right==NULL)
        if(h>max)
            max=h;
    
    dfs(root->left, h, max);
    dfs(root->right, h, max);
 }
 
int Solution::maxDepth(TreeNode* A) {
    if(A==NULL) return 0;
    int max=INT_MIN;
    dfs(A, 0, max);
    return max;
}
