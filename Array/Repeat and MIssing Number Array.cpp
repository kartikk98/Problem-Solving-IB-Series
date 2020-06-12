vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    vector<int> ans(2, 0);
    vector<int> m(A.size()+1, 0);
    for(int n:A)
        m[n]++;
    
    for(int i=1;i<=A.size();i++){
        if(m[i] == 0) 
            ans[1] = i;
        else if(m[i] == 2)
            ans[0] = i;
    }
    return ans;
}
