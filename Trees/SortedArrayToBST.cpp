/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 TreeNode* solve(const vector<int> &A, int low, int high)
 {
     if(low>high)
        return NULL;
        
     int mid = low + (high-low)/2;
     TreeNode *node = new TreeNode(A[mid]);
     node->left = solve(A, low, mid-1);
     node->right = solve(A, mid+1, high);
     return node;
 }
 
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    int n=A.size();
    if(n==0) return NULL;
    if(n==1) return new TreeNode(A[0]);
    
    // int mid  = A.size()/2;
    return solve(A, 0, n-1);
}
