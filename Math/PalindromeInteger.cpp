int Solution::isPalindrome(int A) {
    if(A<0)
        return false;
    
    int rev=0 , num = A;
    while(num)
    {
        rev = 10*rev + num%10;
        num/=10;
    }
    if(rev == A)
        return true;
    else 
        return false;
}
