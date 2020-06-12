/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    
    vector<vector<int>> ans;
    if(A==NULL) return ans;
    
    queue<TreeNode*> q;
    q.push(A);
    int i=1;
    while(!q.empty())
    {
        queue<TreeNode*> temp;
        vector<int> v;
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            TreeNode *front = q.front();
            q.pop();
            
            v.push_back(front->val);
            
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
        if(i%2==0) reverse(v.begin(), v.end());
        ans.push_back(v);
        i++;
    }
    return ans;
    
}
