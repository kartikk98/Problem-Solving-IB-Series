/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inorder(TreeNode *root, int k, int &cnt, int &ans)
{
    if(root==NULL) return;
    inorder(root->left, k, cnt, ans);
    if(++cnt==k){
        ans = root->val;
        return;
    }
    inorder(root->right, k, cnt, ans);
}
int Solution::kthsmallest(TreeNode* A, int B) {
    int cnt=0, ans =0;
    inorder(A, B, cnt, ans);
    return ans;
}
