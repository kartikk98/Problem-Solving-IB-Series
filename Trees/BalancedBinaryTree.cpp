/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int solve(TreeNode *root, bool &ans)
 {
     if(root==NULL) return 0;
     
     int lh = solve(root->left, ans);
     int rh = solve(root->right, ans);
     
     if(abs(lh-rh)>1)
        ans = false;
    
    return 1 + max(lh, rh);
 }
int Solution::isBalanced(TreeNode* A) {
    
    bool ans = true;
    solve(A, ans);
    return ans;
}
