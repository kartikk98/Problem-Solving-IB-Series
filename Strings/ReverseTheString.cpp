string Solution::solve(string A) {
    
    
    string temp = "";
    vector<string> x;
    A = A + " ";
    int n = A.size();
    
    for(int i=0;i<n;i++)
    {
        if(A[i] == ' '){
            if(temp.size() > 0)
            {
                x.push_back(temp);
                temp = "";
            }}
        else
            temp += A[i];
    }
    
    string ans = "";
    for(int i=x.size()-1; i>=0; i--)
    {
        ans += x[i];
        if(i!=0)
            ans += " ";
    }
    A = ans;
    return A;
    
}
