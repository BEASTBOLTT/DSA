int floorSqrt(int n)
{
    int s = 0;
    int e = n;
    long long int ans = -1;
    while (s<=e){
        long long int mid = (s+e)/2;
        long long int sq = mid * mid;
        if (sq == n) {
            ans = mid;
        }
        if (sq > n){
            e = mid -1 ;
        }
        else{
            ans = mid;
            s  = mid +1;
        }
    }
    return ans;
}
