class Solution {
public:
    double solve(int a, int b, vector<vector<double>>& check) {
        if (a <= 0 && b <= 0) return 0.5; 
        if (a <= 0) return 1.0;
        if (b <= 0) return 0.0;
        if (check[a][b] != -1) return check[a][b];

        return check[a][b] = 0.25 * (
            solve(a - 100, b, check) +
            solve(a - 75, b - 25, check) +
            solve(a - 50, b - 50, check) +
            solve(a - 25, b - 75, check)
        );
    }

    double soupServings(int n) {
        if (n >= 4800) return 1.0;
        vector<vector<double>> check(n + 1, vector<double>(n + 1, -1));
        return solve(n, n, check);
    }
};