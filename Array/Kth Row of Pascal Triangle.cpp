vector<int> Solution::getRow(int A) {
    vector<int> prev, cur;
    // if(A==0) return cur;
    // 
    cur.push_back(1);
    if(A == 0) return cur;
    
    prev.push_back(1);
    prev.push_back(1);
    cur.push_back(1);
    // cur.push_back(1);
    if(A == 1) return cur;
    
    for(int i=2;i<=A;i++)
    {
        cur.clear();
        cur.push_back(1);
        
        for(int j=1;j<i;j++)
            cur.push_back(prev[j-1] + prev[j]);
        
        cur.push_back(1);
        prev = cur;
    }
    return cur;
    
}
