#include <bits/stdc++.h>
class Node
{
public:
    int data;
    int row;
    int col;
    Node(int data, int row, int col)
    {
        this->data = data;
        this->row = row;
        this->col = col;
    }
};

class compare
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data;
    }
};

int kSorted(vector<vector<int>> &a, int k, int n)
{
    int mini = INT_MAX;
    int maxi = INT_MIN;

    priority_queue<Node *, vector<Node *>, compare> pq;

    for (int i = 0; i < k; i++)
    {
        int ele = a[i][0];
        mini = min(mini, ele);
        maxi = max(maxi, ele);
        pq.push(new Node(ele, i, 0));
    }

    int start = mini;
    int end = maxi;

    while (!pq.empty())
    {
        Node *tmp = pq.top();
        pq.pop();

        mini = tmp->data;

        if (maxi - mini < end - start)
        {
            start = mini;
            end = maxi;
        }

        if (tmp->col + 1 < n)
        {
            maxi = max(maxi, a[tmp->row][tmp->col + 1]);
            pq.push(new Node(a[tmp->row][tmp->col + 1], tmp->row, tmp->col + 1));
        }
        else
        {
            break;
        }
    }

    return (end - start + 1);
}