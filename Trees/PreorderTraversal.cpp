/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void solve(TreeNode *A, vector<int> &result)
 {
     if(A == NULL) return ;
     
     result.push_back(A->val);
     solve(A->left, result);
     solve(A->right, result);
 }
 
vector<int> Solution::preorderTraversal(TreeNode* A) {

    vector<int> result;
    
    solve(A, result);
    
    return result;
}
