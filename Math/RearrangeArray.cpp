// With O(n) Sapce complexity
void Solution::arrange(vector<int> &A) {
    vector<int> B = A;
    for(int i=0;i<B.size();i++)
        A[i] = B[B[i]];
}
