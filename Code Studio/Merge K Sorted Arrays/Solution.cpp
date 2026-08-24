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

vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
{
    priority_queue<Node *, vector<Node *>, compare> pq;

    for (int i = 0; i < k; i++)
    {
        Node *tmp = new Node(kArrays[i][0], i, 0);
        pq.push(tmp);
    }

    vector<int> ans;

    while (!pq.empty())
    {
        Node *tmp = pq.top();
        ans.push_back(tmp->data);
        pq.pop();
        int r = tmp->row;
        int c = tmp->col;
        if (c + 1 < kArrays[r].size())
        {
            Node *newNode = new Node(kArrays[r][c + 1], r, c + 1);
            pq.push(newNode);
        }
    }

    return ans;
}
