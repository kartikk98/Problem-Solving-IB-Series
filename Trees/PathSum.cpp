/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void solve(TreeNode *A, int targetSum, int lastSum, int &found)
 {
     if(A == NULL) return;
     int curSum = lastSum + A->val;
     
     if(A->left==NULL && A->right==NULL && curSum == targetSum)
    {
        found = 1;
        return ;
    }
    
    solve(A->left, targetSum, curSum, found);
    solve(A->right, targetSum, curSum, found);
 }
 
int Solution::hasPathSum(TreeNode* A, int B) {
    
    int found = 0;
    
    solve(A, B, 0, found);
    return found;
    
}
