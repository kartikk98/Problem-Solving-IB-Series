vector<int> Solution::maxset(vector<int> &A) {
    
    vector<int> max;
    vector<int> temp;
    long long int curSum=0, maxSum=INT_MIN;
    for(int n:A)
    {
        if(n<0)
        {
            if(curSum > maxSum){
                max = temp;
                maxSum = curSum;
            }
            temp.clear();
            curSum=0;
        }
        else{
            temp.push_back(n);
            curSum+=n;
        }
    }
    if(curSum > maxSum)
        max = temp;
    return max;
    
}
