#include <bits/stdc++.h>

string longestCommonPrefix(vector<string> &arr, int n)
{

    string ans = "";

    sort(arr.begin(), arr.end());

    string s1 = arr[0];
    string s2 = arr[n - 1];

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
            ans += s1[i];
        else
            break;
    }
    return ans;
}
