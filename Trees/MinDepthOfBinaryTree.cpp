/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void dfs(TreeNode *root, int h, int &min)
 {
     if(root==NULL) return;
     h++;
     if(root->left==NULL && root->right==NULL)
        if(h<min)
            min=h;
    
    dfs(root->left, h, min);
    dfs(root->right, h, min);
 }
int Solution::minDepth(TreeNode* A) {
    if(A==NULL) return 0;
    int min = INT_MAX;
    dfs(A, 0, min);
    return min;
}