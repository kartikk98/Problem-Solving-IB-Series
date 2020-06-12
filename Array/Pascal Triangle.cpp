vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> result;
    if(A == 0) return result;
    
    vector<int> t;
    t.push_back(1);
    result.push_back(t);
    if(A == 1) return result;
    
    vector<int> tt;
    tt.push_back(1);
    tt.push_back(1);
    result.push_back(tt);
    if(A == 2) return result;
    
    for(int i=2;i<A;i++)
    {
        vector<int> temp;
        temp.push_back(1);
        for(int j=1;j<i;j++)
        {
            int elem = result[i-1][j-1] + result[i-1][j];
            temp.push_back(elem);
        }
        temp.push_back(1);
        result.push_back(temp);
        temp.clear();
    }
    return result;
}
