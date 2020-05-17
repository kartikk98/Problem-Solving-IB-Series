// DP approach 
// Time complexity : O(AB)
// Space complexity : O(AB)
int Solution::uniquePaths(int A, int B) {

    vector<vector<int>> dp(A, vector<int> (B));

    for(int i=0;i<A;i++)
        dp[i][0] = 1;
    for(int j=0;j<B;j++)
        dp[0][j] = 1;

    for(int i=1;i<A;i++)
    {
        for(int j=1;j<B;j++)
        {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];  //only allowing down and right pathh if diagonal path allowed the +dp[i-1][j-1]
        }
    }
    return dp[A-1][B-1];
}


// Recursuve approach with exponential time complexity
/*
int Solution::uniquePaths(int A, int B) {
    if(A==1 || B==1) return 1;
    
    return uniquePaths(A-1, B) + uniquePaths(A, B-1);
}
*/