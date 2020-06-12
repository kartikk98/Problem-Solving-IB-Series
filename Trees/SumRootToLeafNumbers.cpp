/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #define mod 1003
 void solve(TreeNode *A, long long int lastVal, long long int &ans)
 {
    if(A==NULL) return ;
    long long int cur = (lastVal*10 + A->val)%mod;
    
    if(A->left==NULL && A->right==NULL)
        ans = (ans + cur)%mod;
    
    solve(A->left, cur, ans);
    solve(A->right, cur, ans);
 }
int Solution::sumNumbers(TreeNode* A) {
    
    long long int ans = 0;
    
    solve(A, 0, ans);
    
    return ans%mod;
    
}
