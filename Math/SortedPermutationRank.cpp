#define mod 1000003
int fact(int n) 
{ 
    if(n<=1) return 1; 
    return (n * fact(n - 1))%mod;  
}

int Solution::findRank(string a) {
    int n = a.size();
    if(n==1)
        return 1;
    
    int rank = 0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i+1;j<n;j++)
            if(a[j] < a[i])
                count++;
        rank += (count*fact(n-i-1))%mod;
    }
    return (rank+1)%mod;
}


// BRUTE FORCE (Time limit exceeded)
/*
int Solution::findRank(string a) {
	string s = a;
	int rank = 1;

	sort(s.begin(), s.end());
	while(true)
	{
		if(s==a) return rank%1000003;
		if(!next_permutation(s.begin(), s.end())) break;
		rank++;
	}
}
*/