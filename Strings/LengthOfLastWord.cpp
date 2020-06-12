int Solution::lengthOfLastWord(const string A) {
    
    vector<string> words;
    stringstream s(A);
    while(s){
        string word;
        s >> word;
        words.push_back(word);
    }
    
    int n = words.size();
    
    if(words.size()==1) 
        return 0;
    else 
        return words[n-2].size();
}
