vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    
    int T = 0, B = A.size()-1, L = 0, R = A[0].size()-1;
    int dir = 0;
    vector<int> ans;
    
    while(L<=R && T<=B)
    {
        if(dir == 0)
        {
            for(int i=L;i<=R;i++)
                ans.push_back(A[T][i]);
            T++;
            dir = 1;
        }
        else if(dir == 1)
        {
            for(int i=T;i<=B;i++)
                ans.push_back(A[i][R]);
            R--;
            dir = 2;
        }
        else if(dir == 2)
        {
            for(int i=R;i>=L;i--)
                ans.push_back(A[B][i]);
            B--;
            dir = 3;
        }
        if(dir == 3)
        {
            for(int i=B;i>=T;i--)
                ans.push_back(A[i][L]);
            L++;
            dir = 0;
        }
    }
    return ans;
}
