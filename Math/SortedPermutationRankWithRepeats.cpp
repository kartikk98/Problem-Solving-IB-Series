#define mod 1000003

long long int power(long long int A,long long int B) {
    if(A == 0) {
        return 0;
    }
    if(B == 0) {
        return 1;
    }
    
    long long int result ;
    
    if(B%2 == 0) {
        result = power(A,B/2);
        result = ((result%mod) * (result%mod))%mod;
    }
    else {
        result = ((A%mod)*(power(A,B-1)%mod))%mod;
    }
    
    return result;
}

int Solution::findRank(string A) {
    int n = A.length();
    int rank = 0;
    vector<long long int> fact(n);
    
    fact[0] = 1;
    
    for(int i=1;i<n;i++) {
        fact[i] = ((fact[i-1]%mod)*(i%mod))%mod;
    }
    
    for(int i=0; i<n; i++) {
        int countless = 0;
        int countsame = 0;
        
        for(int j = i+1; j<n; j++) {
            if(A[j] < A[i]) {
                countless++;
            }
        }
        
        map<char,int> m;
        
        for(int j=i;j<n;j++) {
            m[A[j]]++;
        }
        
        long long int d = 1;
        
        for(auto c : m) {
            d = ((d%mod)*(fact[c.second]))%mod;
        }
        
        rank = ((rank%mod) + ((countless%mod)*(fact[n-i-1]%mod)*power(d,mod-2))%mod)%mod;
    }
    
    return ((rank + 1)%mod);
}