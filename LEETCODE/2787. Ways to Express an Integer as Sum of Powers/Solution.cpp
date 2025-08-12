class Solution {
public:
    int numberOfWays(int n, int x) {
        int m = 1e9 + 7;
        vector<int> pl;
        for (int i = 1; ; ++i) {
            long long p = 1;
            for (int k = 0; k < x; ++k) p *= i;
            if (p > n) break;
            pl.push_back((int)p);
        }

        vector<long long> check(n + 1, 0);
        check[0] = 1;
        for (int p : pl) {
            for (int s = n; s >= p; --s) {
                check[s] = (check[s] + check[s - p]) % m;
            }
        }
        return (int)check[n];
    }
};