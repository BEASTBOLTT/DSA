class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        if (word1.size() != word2.size())
        {
            return false;
        }
        int n = word1.size();
        vector<int> letters1(26, 0);
        vector<int> letters2(26, 0);
        for (int i = 0; i < n; i++)
        {
            letters1[word1[i] - 'a']++;
            letters2[word2[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if ((letters1[i] == 0) != (letters2[i] == 0))
            {
                return false;
            }
        }
        sort(letters1.begin(), letters1.end());
        sort(letters2.begin(), letters2.end());
        if (letters1 != letters2)
        {
            return false;
        }

        return true;
    }
};