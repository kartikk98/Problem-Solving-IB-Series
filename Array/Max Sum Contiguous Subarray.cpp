int Solution::maxSubArray(const vector<int> &A) {
    int max = -1000, curSum = 0, n = A.size();
    for(int i=0;i<n;i++)
    {
        curSum += A[i];
        if(curSum > max)
            max = curSum;
        
        if(curSum < 0)
            curSum = 0;
    }
    return max;
}
