int Solution::hammingDistance(const vector<int> &A) {
    
    int arr[32];
    for(int i=0;i<32;i++)
        arr[i]=0;
        
    for(int i=0;i<A.size();i++)
    {
        int j=0;
        int val=A[i];
        while(val>0)
        {
            arr[j++]+=val&1;
            val>>=1;
        }
    }
    long long int ans=0;
    for(int i=0;i<32;i++)
        ans=(ans+2*arr[i]*(A.size()-arr[i]))%1000000007;
    
    return ans;
}