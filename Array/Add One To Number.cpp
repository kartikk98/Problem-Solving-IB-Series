vector<int> Solution::plusOne(vector<int> &A) {
    
    int carry = 1;
    while(A[0] == 0) {
        A.erase(A.begin());
        if(A.empty()) {
            A.push_back(carry);
            return A;
        }
    }
    
    int i=A.size()-1;
    while(carry>0 && i>=0)
    {
        int sum = A[i] + carry;
        A[i] = sum%10;
        carry = sum/10;
        i--;
    }
    if(carry>0 && i<0)
        A.insert(A.begin(), 1);
        
    return A;
}
