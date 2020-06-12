/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void solve(TreeNode *A, vector<vector<int>> &ans, vector<int> &v, int &curSum, int target)
 {
    if(A == NULL) return ;
    
    // vector<int> temp;
    v.push_back(A->val);
    curSum += A->val;
    
        
    solve(A->left, ans, v, curSum, target);
    solve(A->right, ans, v, curSum, target);
    if(A->left==NULL && A->right==NULL && curSum == target)
        ans.push_back(v);
        
    curSum-=v[v.size()-1];
    v.pop_back();
    return;
    
 }
 
vector<vector<int> > Solution::pathSum(TreeNode* A, int target) {
    
    vector<int> v;
    int curSum = 0;
    vector<vector<int> > ans;
    
    solve(A, ans, v, curSum, target);
    
    return ans;
}
