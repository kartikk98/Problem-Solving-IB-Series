// BRUTE FORCE (Time limit exceeded)
int Solution::findRank(string a) {
	string s = a;
	int rank = 1;

	sort(s.begin(), s.end());
	while(true)
	{
		if(s==a) return rank%1000003;
		if(!next_permutation(s.begin(), s.end())) break;
		rank++;
	}
}