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
     
     solve(A->left, result);
     solve(A->right, result);
     result.push_back(A->val);
 }
 
vector<int> Solution::postorderTraversal(TreeNode* A) {

    vector<int> result;
    
    solve(A, result);
    
    return result;
}
