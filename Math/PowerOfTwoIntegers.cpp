////    optimized  O(sqrt(n))    ////
int Solution::isPower(int A){
    if(A==1) return 1;
    for(int i=2; i*i<=A; i++)
    {
        int p = log(A)/log(i);   // i^p=A  ==>  i=log(A)/log(i)
        if(pow(i,p) == A)
            return 1; 
    }
    return 0;
}


/*///    BRUTE FORCE  O(sqrt(n)*n)    ////
int Solution::isPower(int A) {
    if(A==1) return true;
    for(int i=2;i*i<=A;i++)
    {
        int y = 2;
        // int power = pow(i, y);   not using like this because can cause overflow and time exceed
        while(pow(i,y) <= A)
        {
            if(pow(i,y) == A)
                return true;
            y++;
            // power = pow(i,y);
        }
    }            
    return false;
}
*/