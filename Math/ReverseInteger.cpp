int Solution::reverse(int A) {
    bool neg = false;
    if(A<0)
    {
        A = A*(-1);
        neg = true;
    }
    int rev = 0;
    while(A)
    {
        int pop = A%10;
        if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > (INT_MAX%10))) 
                return 0;
        rev = rev*10 + pop;
        A/=10;
    }
    if(neg == true)
        rev *= (-1);
    return rev;
    
    
}
