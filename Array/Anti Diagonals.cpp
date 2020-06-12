vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {

    int n=A.size();
    vector<vector<int>> ans(2*n - 1);
    // vector<int> temp;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int indexSum = i+j;
            ans[indexSum].push_back(A[i][j]);
        }
    }
    return ans;
    
}
