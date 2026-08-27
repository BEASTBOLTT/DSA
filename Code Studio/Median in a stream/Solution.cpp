#include <bits/stdc++.h>
int signum(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    else if (a > b)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int callMedian(int ele, priority_queue<int> &maxpq, priority_queue<int, vector<int>, greater<int>> &minpq, int &median)
{
    switch (signum(maxpq.size(), minpq.size()))
    {
    case 0:
        if (ele > median)
        {
            minpq.push(ele);
            median = minpq.top();
        }
        else
        {
            maxpq.push(ele);
            median = maxpq.top();
        }
        break;
    case 1:
        if (ele > median)
        {
            minpq.push(ele);
            median = (minpq.top() + maxpq.top()) / 2;
        }
        else
        {
            minpq.push(maxpq.top());
            maxpq.pop();
            maxpq.push(ele);

            median = (minpq.top() + maxpq.top()) / 2;
        }
        break;
    case -1:
        if (ele > median)
        {
            maxpq.push(minpq.top());
            minpq.pop();
            minpq.push(ele);

            median = (minpq.top() + maxpq.top()) / 2;
        }
        else
        {
            maxpq.push(ele);
            median = (minpq.top() + maxpq.top()) / 2;
        }
        break;
    }

    return median;
}

vector<int> findMedian(vector<int> &arr, int n)
{

    vector<int> ans;
    priority_queue<int> maxpq;
    priority_queue<int, vector<int>, greater<int>> minpq;
    int median = 0;

    for (int i = 0; i < n; i++)
    {
        median = callMedian(arr[i], maxpq, minpq, median);
        ans.push_back(median);
    }

    return ans;
}
