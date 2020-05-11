int Solution::trailingZeroes(int A) {
    int i=5, zeroes=0;
    while(A/i)
    {
        zeroes += A/i;
        i*=5;
    }
    return zeroes;
}