bool isPrime(int n)
{
    if(n==2) return true;
    if(n%2 == 0) return false;
    
    for(int i=3; i*i<=n;i+=2)
        if(n%i == 0)
            return false;
    return true;
}

vector<int> Solution::primesum(int A) {
    vector<int> ans;
    for(int i =2;i<A;i++)
        if(isPrime(i) && isPrime(A-i)){
            ans.push_back(i);
            ans.push_back(A-i);
            return ans;
        }
}