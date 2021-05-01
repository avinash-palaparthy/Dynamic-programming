int Solution::climbStairs(int A) {
    // Start with nth step. There are only two ways to reach it, from (n-1) or (n-2). Hence, count[n] = count[n-1] + count[n-2];
    int count[A];
    count[0]=1;
    count[1]=2;
    for(int i=2; i<A; i++){
        count[i] = count[i-1] + count[i-2];
    }
    return count[A-1];
}


