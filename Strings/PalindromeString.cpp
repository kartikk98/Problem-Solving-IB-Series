int Solution::isPalindrome(string A) {
    
    string orig = "", rev;
    
    for(char c: A)
    {
        if(isalnum(c))
            orig+=tolower(c);
    }
    
    rev = orig;
    reverse(rev.begin(), rev.end());
    
    if(rev == orig) return 1;
    else return 0;
}
