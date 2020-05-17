#define MOD 1000000007
#define ll long long
ll power(ll a, ll b){
    if(a == 0) return 0;
    if(b == 0) return 1;
    
    if(b%2 == 0)
        return power(a*a % MOD, b/2)%MOD;
    else{
        return (a* power(a*a%MOD, (b-1)/2))%MOD;
    }
}

int Solution :: solve(int A, vector<int> &B) {
    vector<int> chunk;
    if(B.size() == A)
        return 1;
    int n = A - B.size();
    int fact[1001];
    ll f = 1;
    fact[0] = fact[1] = 1;
    for(int i = 2; i <= A; i++){
        f = (fact[i-1]* (ll)i )% MOD;
        fact[i] = (int) f;
    }
    
    sort(B.begin(), B.end());
    
    for(int i = 1; i < B.size(); i++){
        if(B[i]-B[i-1] != 1)
            chunk.push_back(B[i]-B[i-1]-1);
    }
        
    ll d = 1;
    for(int i = 0; i < chunk.size(); i++){
        d = (d * fact[chunk[i]])%MOD;
    }
    d = (d*fact[B[0]-1])%MOD;
    d = (d*fact[A - B[B.size()-1]])%MOD;
    f = fact[n];
    for(int i = 0; i < chunk.size(); i++){
        f = (f * power(2, chunk[i]-1))%MOD;
    }
    return (int)( (f * power(d, MOD-2))%MOD);
}