#include <algorithm>

int getKthLargest(vector<int> &arr, int k)
{
    vector<int> sumList;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            sumList.push_back(sum);
        }
    }

    sort(sumList.begin(), sumList.end());

    return sumList[sumList.size() - k];
}