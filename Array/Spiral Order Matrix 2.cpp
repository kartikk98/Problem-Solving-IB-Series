vector<vector<int> > Solution::generateMatrix(int A) {
    
    int T = 0, B = A-1, L = 0, R = A-1;
    int dir = 0;
    vector<vector<int>> ans(A, vector<int>(A));
    int n=1;
    while(L<=R && T<=B)
    {
        if(dir == 0)
        {
            for(int i=L;i<=R;i++)
                ans[T][i] = n++;
            T++;
            dir = 1;
        }
        else if(dir == 1)
        {
            for(int i=T;i<=B;i++)
                ans[i][R] = n++;;
            R--;
            dir = 2;
        }
        else if(dir == 2)
        {
            for(int i=R;i>=L;i--)
                ans[B][i] = n++;
            B--;
            dir = 3;
        }
        if(dir == 3)
        {
            for(int i=B;i>=T;i--)
                ans[i][L] = n++;
            L++;
            dir = 0;
        }
    }
    return ans;
    
}
