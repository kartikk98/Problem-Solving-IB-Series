string Solution::convertToTitle(int n) {
    string ans;
    while(n)
    {
        n--;     // This is done to make it a base 26 conversion problem as it makes it easier.
        ans.push_back('A' + n%26);
        n /= 26;
    }
    reverse(ans.begin(), ans.end()); 
    return ans;
}