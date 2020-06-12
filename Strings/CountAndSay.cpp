string Solution::countAndSay(int A) {
    
    string prev = "1";
    string ans = prev;
    
    for(int i=2;i<=A;i++)
    {
        int n = prev.size();
        ans = "";
        for(int j=0;j<n;j++)
        {
            int freq = 1;
            while(j<n-1 && prev[j]==prev[j+1])
            {
                freq++;
                j++;
            }
            ans += to_string(freq) + prev[j];
        }
        prev = ans;
    }
    return ans;
}
