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
     result.push_back(A->val);
     solve(A->right, result);
 }
 
vector<int> Solution::inorderTraversal(TreeNode* A) {

    vector<int> result;
    
    solve(A, result);
    
    return result;
}
