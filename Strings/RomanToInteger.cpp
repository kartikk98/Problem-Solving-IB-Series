int Solution::romanToInt(string s) {
    
    unordered_map<char, int> m = 
    {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };
    int n=s.size(), ans=0;
    
    for(int i=n-1;i>=0;i--)
    {
        if(i>0 && (s[i]=='V' || s[i]=='X') && s[i-1]=='I'){
            ans += (m[s[i]]-1);
            i--;
        }
        
        else if(i>0 && (s[i]=='L' || s[i]=='C') && s[i-1]=='X'){
            ans += (m[s[i]]-10);
            i--;
        }
        
        else if(i>0 && (s[i]=='D' || s[i]=='M') && s[i-1]=='C'){
            ans += (m[s[i]]-100);
            i--;
        }
        
        else
            ans+=m[s[i]];
    }
    return ans;
    
}
