class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int, int> tree;
        int start = 0, mx = 0;

        for (int i = 0; i < n; ++i) {
            tree[fruits[i]]++;

            while (tree.size() > 2) {
                tree[fruits[start]]--;
                if (tree[fruits[start]] == 0)
                    tree.erase(fruits[start]);
                start++;
            }

            mx = max(mx, i - start + 1);
        }

        return mx;
    }
};